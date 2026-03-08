#include <iostream>
#include <bits/ios_base.h>

#include "soa_wrapper.h"

void compute_dist_sample() {
    constexpr static int size = 10;
    struct instigator final {
        int* x;
        int* y;
        int* z;
        static auto create() {
            hope::soa::wrapper<instigator> wrapper;
            wrapper.resize(size);
            auto begin = wrapper.get(0);
            for (auto i = 0; i < size; ++i) {
                begin.x[i] = std::rand() % 10000;
                begin.y[i] = std::rand() % 10000;
                begin.z[i] = std::rand() % 10000;
            }
            return wrapper;
        }
    };

    // using "get"
    {
        auto wr = instigator::create();
        // represents sample point to compute distance to
        int x = 15, y = 3, z = 25;
        std::vector<int> sq_dist;
        sq_dist.resize(size);
        auto begin = wr.get(0);
        for (auto i = 0; i < size; ++i) {
            sq_dist[i] = begin.x[i] * x + begin.y[i] * y + begin.z[i] * z;
        }

        std::cout << "dist\n";
        for (auto i = 0; i < size; ++i) {
            std::cout
                << '[' << *wr.get(i).x << "]"
                << '[' << *wr.get(i).y << "]"
                << '[' << *wr.get(i).z << "]\n";
        }
    }

    // using slice per index, not a prefarable one
    {
        auto wr = instigator::create();
        // represents sample point to compute distance to
        int x = 15, y = 3, z = 25;
        std::vector<int> sq_dist;
        sq_dist.resize(size);
        for (auto i = 0; i < size; ++i) {
            sq_dist[i] = *wr[i].x * x + *wr[i].y * y + *wr[i].z * z;
        }
    }
}

void pushing_data() {
    constexpr static int size = 10;
    struct instigator final {
        int* x;
        int* y;
        int* z;
    };

    hope::soa::wrapper<instigator> wrapper;
    wrapper.reserve(size);
    for (auto i = 0; i < size; ++i) {
        auto slice = wrapper.add_get_slice();
        *slice.x = std::rand() % 100000;
        *slice.y = std::rand() % 100000;
        *slice.z = std::rand() % 100000;
    }
    std::cout << "pushing data\n";
    for (auto i = 0; i < size; ++i) {
        std::cout
            << '[' << *wrapper.get(i).x << "]"
            << '[' << *wrapper.get(i).y << "]"
            << '[' << *wrapper.get(i).z << "]\n";
    }
}

void iterator() {
    constexpr static int size = 10;
    struct instigator final {
        int* x;
        int* y;
        int* z;
    };
    hope::soa::wrapper<instigator> wrapper;
    wrapper.reserve(size);
    for (auto i = 0; i < size; ++i) {
        auto slice = wrapper.add_get_slice();
        *slice.x = std::rand() % 100000;
        *slice.y = std::rand() % 100000;
        *slice.z = std::rand() % 100000;
    }
    std::cout << "iterator\n";
    for (auto slice : wrapper) {
        std::cout << '[' << *slice.x << "]";
        std::cout << '[' << *slice.y << "]";
        std::cout << '[' << *slice.z << "]\n";
    }
}

void wrapper_with_handle() {
    struct instigator final {
        int* x;
        int* y;
    };

    hope::soa::wrapper_with_handle<instigator, int> wrapper;
    for (int handle = 100; handle < 103; ++handle) {
        auto slice = wrapper.add_get_slice(handle);
        *slice.x = handle;
        *slice.y = handle * 10;
    }

    std::cout << "wrapper_with_handle\n";
    for (auto entry : wrapper) {
        std::cout
            << "handle=" << entry.handle
            << " x=" << *entry.slice.x
            << " y=" << *entry.slice.y
            << '\n';
    }

    wrapper.erase_handle(101);
    std::cout << "after erase 101\n";
    for (auto entry : wrapper) {
        std::cout
            << "handle=" << entry.handle
            << " x=" << *entry.slice.x
            << " y=" << *entry.slice.y
            << '\n';
    }
}

int main() {
    compute_dist_sample();
    pushing_data();
    iterator();
    wrapper_with_handle();
}
