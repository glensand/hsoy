#include <cassert>

#include "soa_wrapper.h"

namespace {

struct test_slice final {
    int* i;
    float* f;
};

struct handle_slice final {
    int* x;
    int* y;
};

void test_add_get_slice() {
    hope::soa::wrapper<test_slice> storage;

    auto first = storage.add_get_slice();
    assert(storage.size == 1);
    *first.i = 42;
    *first.f = 4.2f;

    auto first_again = storage.get(0);
    assert(*first_again.i == 42);
    assert(*first_again.f == 4.2f);

    auto second = storage.add_get_slice();
    assert(storage.size == 2);
    *second.i = 7;
    *second.f = 7.5f;

    auto second_again = storage[1];
    assert(*second_again.i == 7);
    assert(*second_again.f == 7.5f);
}

void test_resize_and_reserve() {
    hope::soa::wrapper<test_slice> storage;

    storage.reserve(8);
    assert(std::get<0>(storage.soa).capacity() >= 8);
    assert(std::get<1>(storage.soa).capacity() >= 8);

    storage.resize(3);
    assert(storage.size == 3);
    assert(std::get<0>(storage.soa).size() == 3);
    assert(std::get<1>(storage.soa).size() == 3);

    auto third = storage.get(2);
    *third.i = 99;
    *third.f = 9.9f;

    storage.resize(5);
    assert(storage.size == 5);

    auto third_after_resize = storage.get(2);
    assert(*third_after_resize.i == 99);
    assert(*third_after_resize.f == 9.9f);
}

void test_clear() {
    hope::soa::wrapper<test_slice> storage;
    storage.add_get_slice();
    storage.add_get_slice();

    storage.clear();
    assert(std::get<0>(storage.soa).empty());
    assert(std::get<1>(storage.soa).empty());
}

void test_iterator() {
    hope::soa::wrapper<test_slice> storage;
    storage.resize(3);

    int expected_i = 1;
    float expected_f = 0.5f;
    for (auto it = storage.begin(); it != storage.end(); ++it) {
        auto slice = *it;
        *slice.i = expected_i++;
        *slice.f = expected_f;
        expected_f += 1.0f;
    }

    assert(*storage.get(0).i == 1);
    assert(*storage.get(1).i == 2);
    assert(*storage.get(2).i == 3);
    assert(*storage.get(0).f == 0.5f);
    assert(*storage.get(1).f == 1.5f);
    assert(*storage.get(2).f == 2.5f);
}

void test_wrapper_with_handle_add_get_erase() {
    hope::soa::wrapper_with_handle<handle_slice, int> storage;

    auto first = storage.add_get_slice(10);
    *first.x = 100;
    *first.y = 101;

    auto second = storage.add_get_slice(20);
    *second.x = 200;
    *second.y = 201;

    auto third = storage.add_get_slice(30);
    *third.x = 300;
    *third.y = 301;

    assert(storage.size() == 3);
    assert(*storage.get_handle(10).x == 100);
    assert(*storage.get_handle(20).y == 201);
    assert(*storage.get_handle(30).x == 300);

    storage.erase_handle(20);
    assert(storage.size() == 2);
    assert(storage.handle_to_index.find(20) == storage.handle_to_index.end());
    assert(*storage.get_handle(10).x == 100);
    assert(*storage.get_handle(30).y == 301);
}

void test_wrapper_with_handle_iterator() {
    hope::soa::wrapper_with_handle<handle_slice, int> storage;

    for (int handle = 1; handle <= 3; ++handle) {
        auto slice = storage.add_get_slice(handle);
        *slice.x = handle * 10;
        *slice.y = handle * 100;
    }

    int visited = 0;
    int handle_sum = 0;
    int x_sum = 0;
    int y_sum = 0;
    for (auto entry : storage) {
        ++visited;
        handle_sum += entry.handle;
        x_sum += *entry.slice.x;
        y_sum += *entry.slice.y;
    }

    assert(visited == 3);
    assert(handle_sum == 6);
    assert(x_sum == 60);
    assert(y_sum == 600);
}

}

int main() {
    test_add_get_slice();
    test_resize_and_reserve();
    test_clear();
    test_iterator();
    test_wrapper_with_handle_add_get_erase();
    test_wrapper_with_handle_iterator();
    return 0;
}
