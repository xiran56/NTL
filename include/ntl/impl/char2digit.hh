#pragma once

#include <cstdint>
#include <type_traits>

#include "helpers.hh"

namespace ntl::impl {
    inline constexpr std::uint8_t invalid_digit { 36 };
    
    namespace detail {
        template<char ch>
        struct digit_ : std::integral_constant<std::uint8_t, invalid_digit> {};

        template<> struct digit_<'0'> : std::integral_constant<std::uint8_t, 0> {};
        template<> struct digit_<'1'> : std::integral_constant<std::uint8_t, 1> {};
        template<> struct digit_<'2'> : std::integral_constant<std::uint8_t, 2> {};
        template<> struct digit_<'3'> : std::integral_constant<std::uint8_t, 3> {};
        template<> struct digit_<'4'> : std::integral_constant<std::uint8_t, 4> {};
        template<> struct digit_<'5'> : std::integral_constant<std::uint8_t, 5> {};
        template<> struct digit_<'6'> : std::integral_constant<std::uint8_t, 6> {};
        template<> struct digit_<'7'> : std::integral_constant<std::uint8_t, 7> {};
        template<> struct digit_<'8'> : std::integral_constant<std::uint8_t, 8> {};
        template<> struct digit_<'9'> : std::integral_constant<std::uint8_t, 9> {};
        template<> struct digit_<'A'> : std::integral_constant<std::uint8_t, 10> {};
        template<> struct digit_<'B'> : std::integral_constant<std::uint8_t, 11> {};
        template<> struct digit_<'C'> : std::integral_constant<std::uint8_t, 12> {};
        template<> struct digit_<'D'> : std::integral_constant<std::uint8_t, 13> {};
        template<> struct digit_<'E'> : std::integral_constant<std::uint8_t, 14> {};
        template<> struct digit_<'F'> : std::integral_constant<std::uint8_t, 15> {};
        template<> struct digit_<'G'> : std::integral_constant<std::uint8_t, 16> {};
        template<> struct digit_<'H'> : std::integral_constant<std::uint8_t, 17> {};
        template<> struct digit_<'I'> : std::integral_constant<std::uint8_t, 18> {};
        template<> struct digit_<'J'> : std::integral_constant<std::uint8_t, 19> {};
        template<> struct digit_<'K'> : std::integral_constant<std::uint8_t, 20> {};
        template<> struct digit_<'L'> : std::integral_constant<std::uint8_t, 21> {};
        template<> struct digit_<'M'> : std::integral_constant<std::uint8_t, 22> {};
        template<> struct digit_<'N'> : std::integral_constant<std::uint8_t, 23> {};
        template<> struct digit_<'O'> : std::integral_constant<std::uint8_t, 24> {};
        template<> struct digit_<'P'> : std::integral_constant<std::uint8_t, 25> {};
        template<> struct digit_<'Q'> : std::integral_constant<std::uint8_t, 26> {};
        template<> struct digit_<'R'> : std::integral_constant<std::uint8_t, 27> {};
        template<> struct digit_<'S'> : std::integral_constant<std::uint8_t, 28> {};
        template<> struct digit_<'T'> : std::integral_constant<std::uint8_t, 29> {};
        template<> struct digit_<'U'> : std::integral_constant<std::uint8_t, 30> {};
        template<> struct digit_<'V'> : std::integral_constant<std::uint8_t, 31> {};
        template<> struct digit_<'W'> : std::integral_constant<std::uint8_t, 32> {};
        template<> struct digit_<'X'> : std::integral_constant<std::uint8_t, 33> {};
        template<> struct digit_<'Y'> : std::integral_constant<std::uint8_t, 34> {};
        template<> struct digit_<'Z'> : std::integral_constant<std::uint8_t, 35> {};
        template<> struct digit_<'a'> : std::integral_constant<std::uint8_t, 10> {};
        template<> struct digit_<'b'> : std::integral_constant<std::uint8_t, 11> {};
        template<> struct digit_<'c'> : std::integral_constant<std::uint8_t, 12> {};
        template<> struct digit_<'d'> : std::integral_constant<std::uint8_t, 13> {};
        template<> struct digit_<'e'> : std::integral_constant<std::uint8_t, 14> {};
        template<> struct digit_<'f'> : std::integral_constant<std::uint8_t, 15> {};
        template<> struct digit_<'g'> : std::integral_constant<std::uint8_t, 16> {};
        template<> struct digit_<'h'> : std::integral_constant<std::uint8_t, 17> {};
        template<> struct digit_<'i'> : std::integral_constant<std::uint8_t, 18> {};
        template<> struct digit_<'j'> : std::integral_constant<std::uint8_t, 19> {};
        template<> struct digit_<'k'> : std::integral_constant<std::uint8_t, 20> {};
        template<> struct digit_<'l'> : std::integral_constant<std::uint8_t, 21> {};
        template<> struct digit_<'m'> : std::integral_constant<std::uint8_t, 22> {};
        template<> struct digit_<'n'> : std::integral_constant<std::uint8_t, 23> {};
        template<> struct digit_<'o'> : std::integral_constant<std::uint8_t, 24> {};
        template<> struct digit_<'p'> : std::integral_constant<std::uint8_t, 25> {};
        template<> struct digit_<'q'> : std::integral_constant<std::uint8_t, 26> {};
        template<> struct digit_<'r'> : std::integral_constant<std::uint8_t, 27> {};
        template<> struct digit_<'s'> : std::integral_constant<std::uint8_t, 28> {};
        template<> struct digit_<'t'> : std::integral_constant<std::uint8_t, 29> {};
        template<> struct digit_<'u'> : std::integral_constant<std::uint8_t, 30> {};
        template<> struct digit_<'v'> : std::integral_constant<std::uint8_t, 31> {};
        template<> struct digit_<'w'> : std::integral_constant<std::uint8_t, 32> {};
        template<> struct digit_<'x'> : std::integral_constant<std::uint8_t, 33> {};
        template<> struct digit_<'y'> : std::integral_constant<std::uint8_t, 34> {};
        template<> struct digit_<'z'> : std::integral_constant<std::uint8_t, 35> {};
    }

    template<char ch>
    inline constexpr std::uint8_t char2digit { detail::digit_<ch>::value };
}
