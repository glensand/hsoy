/* Copyright (C) 2026 Gleb Bezborodov - All Rights Reserved
* You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/hsoy
 */

#include <cstddef>
#include <tuple>
#include <functional>

namespace hope::soa::gen {
    template<std::size_t N>
    struct Int {};

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<1>) {
        auto&& [_0] = object;
        return std::make_tuple(std::ref(_0));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<2>) {
        auto&& [_0, _1] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<3>) {
        auto&& [_0, _1, _2] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<4>) {
        auto&& [_0, _1, _2, _3] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<5>) {
        auto&& [_0, _1, _2, _3, _4] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<6>) {
        auto&& [_0, _1, _2, _3, _4, _5] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<7>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<8>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<9>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<10>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<11>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<12>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<13>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<14>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<15>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<16>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<17>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<18>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<19>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<20>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<21>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<22>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<23>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<24>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<25>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<26>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<27>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<28>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<29>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<30>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<31>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<32>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<33>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<34>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<35>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<36>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<37>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<38>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<39>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<40>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<41>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<42>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<43>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<44>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<45>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<46>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<47>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<48>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<49>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<50>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<51>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<52>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<53>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<54>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<55>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<56>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<57>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<58>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<59>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<60>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<61>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<62>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<63>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<64>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<65>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<66>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<67>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<68>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<69>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<70>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<71>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<72>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<73>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<74>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<75>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<76>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<77>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<78>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<79>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<80>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<81>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<82>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<83>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<84>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<85>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<86>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<87>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<88>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<89>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<90>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<91>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<92>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<93>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91), std::ref(_92));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<94>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91), std::ref(_92), std::ref(_93));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<95>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91), std::ref(_92), std::ref(_93), std::ref(_94));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<96>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91), std::ref(_92), std::ref(_93), std::ref(_94), std::ref(_95));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<97>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91), std::ref(_92), std::ref(_93), std::ref(_94), std::ref(_95), std::ref(_96));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<98>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, _97] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91), std::ref(_92), std::ref(_93), std::ref(_94), std::ref(_95), std::ref(_96), std::ref(_97));
    }

    template <typename T>
    constexpr auto make_tuple(T&& object, Int<99>) {
        auto&& [_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, _97, _98] = object;
        return std::make_tuple(std::ref(_0), std::ref(_1), std::ref(_2), std::ref(_3), std::ref(_4), std::ref(_5), std::ref(_6), std::ref(_7), std::ref(_8), std::ref(_9), std::ref(_10), std::ref(_11), std::ref(_12), std::ref(_13), std::ref(_14), std::ref(_15), std::ref(_16), std::ref(_17), std::ref(_18), std::ref(_19), std::ref(_20), std::ref(_21), std::ref(_22), std::ref(_23), std::ref(_24), std::ref(_25), std::ref(_26), std::ref(_27), std::ref(_28), std::ref(_29), std::ref(_30), std::ref(_31), std::ref(_32), std::ref(_33), std::ref(_34), std::ref(_35), std::ref(_36), std::ref(_37), std::ref(_38), std::ref(_39), std::ref(_40), std::ref(_41), std::ref(_42), std::ref(_43), std::ref(_44), std::ref(_45), std::ref(_46), std::ref(_47), std::ref(_48), std::ref(_49), std::ref(_50), std::ref(_51), std::ref(_52), std::ref(_53), std::ref(_54), std::ref(_55), std::ref(_56), std::ref(_57), std::ref(_58), std::ref(_59), std::ref(_60), std::ref(_61), std::ref(_62), std::ref(_63), std::ref(_64), std::ref(_65), std::ref(_66), std::ref(_67), std::ref(_68), std::ref(_69), std::ref(_70), std::ref(_71), std::ref(_72), std::ref(_73), std::ref(_74), std::ref(_75), std::ref(_76), std::ref(_77), std::ref(_78), std::ref(_79), std::ref(_80), std::ref(_81), std::ref(_82), std::ref(_83), std::ref(_84), std::ref(_85), std::ref(_86), std::ref(_87), std::ref(_88), std::ref(_89), std::ref(_90), std::ref(_91), std::ref(_92), std::ref(_93), std::ref(_94), std::ref(_95), std::ref(_96), std::ref(_97), std::ref(_98));
    }
}
