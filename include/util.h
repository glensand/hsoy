/* Copyright (C) 2026 Gleb Bezborodov - All Rights Reserved
* You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/hsoy
 */

#pragma once

#include <type_traits>
#include <tuple>
#include <vector>
#include "generated.h"
#include <functional>

namespace hope::soa {

    namespace detail::member_counter {

        template <typename TStruct, std::size_t I>
        struct any_convertible {
            template <typename T, typename = std::enable_if_t<!std::is_base_of_v<T, TStruct>>>
            constexpr operator T& () const noexcept;
        };

        template <typename TStruct, std::size_t... Is>
        constexpr auto is_constructable_n(std::index_sequence<Is...>)
            ->decltype(TStruct{ any_convertible<TStruct, Is>{}... }, bool()) {
            return true;
        }
        template <typename TStruct, std::size_t... Is>
        constexpr auto is_constructable_n(...) {
            return false;
        }

        template <typename TStructure, std::size_t... Is>
        constexpr std::size_t count_impl(std::index_sequence<Is...> sequence) {
            bool bs[] = { is_constructable_n<TStructure>(std::make_index_sequence<Is>())... };
            for (std::size_t i{ 1 }; i < sequence.size(); ++i) {
                if (!bs[i]) return i - 1;
            }
            return 0;
        }

        template <typename TStructure>
        constexpr std::size_t count() {
            constexpr auto size = sizeof(TStructure);
            return count_impl<TStructure>(std::make_index_sequence<size + 2>());
        }
    }

    namespace detail::lh {

        template <typename... Types>
        class type_list final { };

        template <typename T, std::size_t I>
        struct def_inserter {
            friend constexpr auto get_impl(def_inserter<T, I>);
        };

        template <typename K, typename V>
        struct dec_inserter {
            friend constexpr auto get_impl(K) { return V{}; }
        };

        template <std::size_t I, typename K, typename V>
        constexpr void inject(K, V) {
            (void)sizeof(dec_inserter<def_inserter<K, I>, V>);
        }

        template <std::size_t I, typename K>
        constexpr auto get(K) {
            return get_impl(def_inserter<K, I>{});
        }

        template <typename T>
        constexpr T ctr_helper() noexcept {
            return {};
        }

        template <typename TStruct, std::size_t I>
        struct any_constructible {
            using st_t = std::decay_t<TStruct>;
            template <typename TRaw>
            constexpr operator TRaw () const noexcept {
                using raw_t = std::decay_t<TRaw>;
                inject<I>(st_t{}, TRaw{});
                return ctr_helper<raw_t>();
            }
        };

        template <typename T, std::size_t... Is>
        constexpr auto get_types(std::index_sequence<Is...>) {
            constexpr T obj{ any_constructible<T, Is>{}... };
            (void)obj;
            return type_list<decltype(get<Is>(std::declval<T>()))...>{};
        }
    }

    template<typename... Ts>
    struct tuple_traits;

    template<typename... Ts>
    struct tuple_traits<detail::lh::type_list<Ts*...>> {
        using type = std::tuple<std::vector<Ts>...>;
    };

    template <typename T>
    constexpr auto tuple_from_st(T&& Str) {
        constexpr auto count = detail::member_counter::count<std::decay_t<T>>();
        return  hope::soa::gen::make_tuple(std::forward<T>(Str), hope::soa::gen::Int<count>{});
    }

    void tuple_for_each(auto&& t1, auto&& t2, auto&& func) {
        constexpr const std::size_t size = []<typename... Ts> (const std::tuple<Ts...>&) {
            return sizeof...(Ts);
        }(std::decay_t<decltype(t1)>{});
        []<std::size_t... Is> (std::index_sequence<Is...> seq, auto&& func, auto&& t1, auto&& t2) {
            (func(std::get<Is>(t1), std::get<Is>(t2)), ...);
        }(std::make_index_sequence<size>{}, func, std::forward<decltype(t1)>(t1),
            std::forward<decltype(t2)>(t2));
    }

    void tuple_for_each(auto&& t, auto&& func) {
        constexpr const std::size_t size = []<typename... Ts> (const std::tuple<Ts...>&) {
            return sizeof...(Ts);
        }(std::decay_t<decltype(t)>{});
        []<std::size_t... Is> (std::index_sequence<Is...>, auto&& func, auto&& t) {
            (func(std::get<Is>(t)), ...);
        }(std::make_index_sequence<size>{}, func, std::forward<decltype(t)>(t));
    }

    template <typename T>
    constexpr auto get_types() {
        constexpr const std::size_t size = hope::soa::detail::member_counter::count<T>();
        return detail::lh::get_types<T>(std::make_index_sequence<size>{});
    }

}
