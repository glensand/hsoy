/* Copyright (C) 2026 Gleb Bezborodov - All Rights Reserved
* You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/hsoy
 */

#pragma once

#include <tuple>
#include <unordered_map>
#include <vector>

#include "util.h"

namespace hope::soa {

    template<typename TSlice>
    struct wrapper final {
        using TPackList = decltype(hope::soa::get_types<TSlice>());
        constexpr static auto ArrayCount = hope::soa::detail::member_counter::count<TSlice>();

        TSlice add_get_slice() {
            resize(size + 1);
            return get(size - 1);
        }

        TSlice get(std::size_t index) {
            TSlice res{};
            auto&& tuple = tuple_from_st(res);
            tuple_for_each(soa, tuple, [index](auto&& from, auto&& to) {
                to = from.data() + index;
            });
            return res;
        }
        // NOTE:: const correctness is not we need here
        TSlice get(std::size_t index) const {
            TSlice res{};
            auto&& tuple = tuple_from_st(res);
            tuple_for_each(soa, tuple, [index](auto&& from, auto&& to) {
                to = from.data() + index;
            });
            return res;
        }

        void reserve(std::size_t count) {
            tuple_for_each(soa, [count](auto&& array) {
                array.reserve(count);
            });
        }

        void clear() {
            tuple_for_each(soa, [](auto&& array) {
                array.clear();
            });
            size = 0;
        }

        void resize(std::size_t count) {
            tuple_for_each(soa, [count](auto&& array) {
                array.resize(count);
            });
            size = count;
        }

        TSlice operator[](std::size_t index) {
            return get(index);
        }

        void erase(std::size_t index) {
            tuple_for_each(soa, [index](auto&& array) {
                array.erase(array.begin() + index);
            });
            --size;
        }

        struct iterator final {
            iterator(std::size_t in_index, wrapper* in_wrapper) : owner(in_wrapper), index(in_index) {}
            wrapper* owner{};
            std::size_t index{};
            auto operator*() const noexcept {
                return owner->get(index);
            }
            auto operator*() noexcept {
                return owner->get(index);
            }
            auto operator++() noexcept {
                ++index; return owner->get(index);
            }
            bool operator!=(const iterator& rhs) const {
                return index != rhs.index;
            }
        };

        auto begin() { return iterator(0, this); }
        auto begin() const { return iterator(0, const_cast<wrapper*>(this)); }
        auto end() { return iterator(size, this); }
        auto end() const { return iterator(size, const_cast<wrapper*>(this)); }

        typename hope::soa::tuple_traits<TPackList>::type soa;
        std::size_t size = 0;
    };

    // same as wrapper, but allows to search by handle
    // reallocation(remove operation by handle) is also supported
    template<typename TSlice, typename THandle>
    struct wrapper_with_handle final {
        using TPackList = decltype(hope::soa::get_types<TSlice>());
        constexpr static auto ArrayCount = hope::soa::detail::member_counter::count<TSlice>();

        TSlice add_get_slice(const THandle& handle) {
            const auto index = size();
            resize(index + 1);
            handle_to_index[handle] = index;
            index_to_handle.emplace_back(handle);
            return get_index(size() - 1);
        }

        TSlice get_handle(const THandle& handle) {
            auto index = handle_to_index.at(handle);
            return get_index(index);
        }

        TSlice get_handle(const THandle& handle) const {
            auto index = handle_to_index.at(handle);
            return get_index(index);
        }

        TSlice get_index(std::size_t index) {
            TSlice res{};
            auto&& tuple = tuple_from_st(res);
            tuple_for_each(soa, tuple, [index](auto&& from, auto&& to) {
                to = from.data() + index;
            });
            return res;
        }

        // NOTE:: const correctness is not we need here
        TSlice get_index(std::size_t index) const {
            TSlice res{};
            auto&& tuple = tuple_from_st(res);
            tuple_for_each(soa, tuple, [index](auto&& from, auto&& to) {
                to = from.data() + index;
            });
            return res;
        }

        void reserve(std::size_t count) {
            tuple_for_each(soa, [count](auto&& array) {
                array.reserve(count);
            });
            index_to_handle.reserve(count);
            handle_to_index.reserve(count);
        }

        void clear() {
            tuple_for_each(soa, [](auto&& array) {
                array.clear();
            });
            index_to_handle.clear();
            handle_to_index.clear();
        }

        void erase_index(std::size_t index) {
            if (index == size() - 1 || size() == 1) {
                // if last index or have only 1 element, just remove it
                auto handle = index_to_handle[index];
                handle_to_index.erase(handle);
                index_to_handle.pop_back();
                tuple_for_each(soa, [](auto&& array) {
                    array.pop_back();
                });
            } else {
                // need to copy value from last index to position we gonna remove
                auto handle_to_remove = index_to_handle[index];
                auto last_element_index = size() - 1;
                auto last_handle = index_to_handle[last_element_index];
                // relink swapped element
                handle_to_index[last_handle] = index;
                index_to_handle[index] = last_handle;
                tuple_for_each(soa, [index, last_element_index](auto&& array) {
                    array[index] = array[last_element_index];
                });

                // now safely remove last element
                handle_to_index.erase(handle_to_remove);
                index_to_handle.pop_back();
                tuple_for_each(soa, [](auto&& array) {
                    array.pop_back();
                });
            }
        }

        void erase_handle(const THandle& handle) {
            auto index = handle_to_index.at(handle);
            erase_index(index);
        }

        TSlice operator[](THandle handle) {
            return get_handle(handle);
        }

        struct iterator final {
            struct bundle final {
                THandle handle;
                TSlice slice;
            };
            iterator(std::size_t in_index, wrapper_with_handle* in_wrapper) : owner(in_wrapper), index(in_index) {}
            wrapper_with_handle* owner{};
            std::size_t index{};
            auto operator*() const noexcept {
                return bundle { owner->index_to_handle[index], owner->get_index(index)};
            }
            auto operator*() noexcept {
                return bundle { owner->index_to_handle[index], owner->get_index(index)};
            }
            auto operator++() noexcept {
                ++index;
                return *this;
            }
            bool operator!=(const iterator& rhs) const {
                return index != rhs.index;
            }
        };

        auto size() const {
            return index_to_handle.size();
        }
        auto begin() { return iterator(0, this); }
        auto begin() const { return iterator(0, const_cast<wrapper_with_handle*>(this)); }
        auto end() { return iterator(size(), this); }
        auto end() const { return iterator(size(), const_cast<wrapper_with_handle*>(this)); }

        typename hope::soa::tuple_traits<TPackList>::type soa;
        std::vector<THandle> index_to_handle;
        std::unordered_map<THandle, std::size_t> handle_to_index;

    private:
        void resize(std::size_t count) {
            tuple_for_each(soa, [count](auto&& array) {
                array.resize(count);
            });
        }
    };
}
