#pragma once

#include <cstdint>
#include <type_traits>

#include "char2digit.hh"

namespace ntl::impl {
    template<class Integer, std::uint8_t Base, char... Chars>
    inline constexpr Integer chars2num { []() {
        Integer result { 0 };

        ([&result]() {
            constexpr auto digit { char2digit<Chars> };

            static_assert(digit < Base, "Invalid digit!");

            result *= Base;

            result += digit;
        } (), ...);

        return result;
    } () };
}
