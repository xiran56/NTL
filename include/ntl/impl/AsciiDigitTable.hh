#pragma once

#include <cstdint>
#include <type_traits>

namespace ntl {
    namespace impl {
        struct InvalidDigit : std::integral_constant<std::uint8_t, 36> {};

        template<char ch>
        struct AsciiDigitTable : std::integral_constant<std::uint8_t, InvalidDigit::value> {};

        template<> struct AsciiDigitTable<'0'> : std::integral_constant<std::uint8_t, 0> {};
        template<> struct AsciiDigitTable<'1'> : std::integral_constant<std::uint8_t, 1> {};
        template<> struct AsciiDigitTable<'2'> : std::integral_constant<std::uint8_t, 2> {};
        template<> struct AsciiDigitTable<'3'> : std::integral_constant<std::uint8_t, 3> {};
        template<> struct AsciiDigitTable<'4'> : std::integral_constant<std::uint8_t, 4> {};
        template<> struct AsciiDigitTable<'5'> : std::integral_constant<std::uint8_t, 5> {};
        template<> struct AsciiDigitTable<'6'> : std::integral_constant<std::uint8_t, 6> {};
        template<> struct AsciiDigitTable<'7'> : std::integral_constant<std::uint8_t, 7> {};
        template<> struct AsciiDigitTable<'8'> : std::integral_constant<std::uint8_t, 8> {};
        template<> struct AsciiDigitTable<'9'> : std::integral_constant<std::uint8_t, 9> {};
        template<> struct AsciiDigitTable<'A'> : std::integral_constant<std::uint8_t, 10> {};
        template<> struct AsciiDigitTable<'B'> : std::integral_constant<std::uint8_t, 11> {};
        template<> struct AsciiDigitTable<'C'> : std::integral_constant<std::uint8_t, 12> {};
        template<> struct AsciiDigitTable<'D'> : std::integral_constant<std::uint8_t, 13> {};
        template<> struct AsciiDigitTable<'E'> : std::integral_constant<std::uint8_t, 14> {};
        template<> struct AsciiDigitTable<'F'> : std::integral_constant<std::uint8_t, 15> {};
        template<> struct AsciiDigitTable<'G'> : std::integral_constant<std::uint8_t, 16> {};
        template<> struct AsciiDigitTable<'H'> : std::integral_constant<std::uint8_t, 17> {};
        template<> struct AsciiDigitTable<'I'> : std::integral_constant<std::uint8_t, 18> {};
        template<> struct AsciiDigitTable<'J'> : std::integral_constant<std::uint8_t, 19> {};
        template<> struct AsciiDigitTable<'K'> : std::integral_constant<std::uint8_t, 20> {};
        template<> struct AsciiDigitTable<'L'> : std::integral_constant<std::uint8_t, 21> {};
        template<> struct AsciiDigitTable<'M'> : std::integral_constant<std::uint8_t, 22> {};
        template<> struct AsciiDigitTable<'N'> : std::integral_constant<std::uint8_t, 23> {};
        template<> struct AsciiDigitTable<'O'> : std::integral_constant<std::uint8_t, 24> {};
        template<> struct AsciiDigitTable<'P'> : std::integral_constant<std::uint8_t, 25> {};
        template<> struct AsciiDigitTable<'Q'> : std::integral_constant<std::uint8_t, 26> {};
        template<> struct AsciiDigitTable<'R'> : std::integral_constant<std::uint8_t, 27> {};
        template<> struct AsciiDigitTable<'S'> : std::integral_constant<std::uint8_t, 28> {};
        template<> struct AsciiDigitTable<'T'> : std::integral_constant<std::uint8_t, 29> {};
        template<> struct AsciiDigitTable<'U'> : std::integral_constant<std::uint8_t, 30> {};
        template<> struct AsciiDigitTable<'V'> : std::integral_constant<std::uint8_t, 31> {};
        template<> struct AsciiDigitTable<'W'> : std::integral_constant<std::uint8_t, 32> {};
        template<> struct AsciiDigitTable<'X'> : std::integral_constant<std::uint8_t, 33> {};
        template<> struct AsciiDigitTable<'Y'> : std::integral_constant<std::uint8_t, 34> {};
        template<> struct AsciiDigitTable<'Z'> : std::integral_constant<std::uint8_t, 35> {};
        template<> struct AsciiDigitTable<'a'> : std::integral_constant<std::uint8_t, 10> {};
        template<> struct AsciiDigitTable<'b'> : std::integral_constant<std::uint8_t, 11> {};
        template<> struct AsciiDigitTable<'c'> : std::integral_constant<std::uint8_t, 12> {};
        template<> struct AsciiDigitTable<'d'> : std::integral_constant<std::uint8_t, 13> {};
        template<> struct AsciiDigitTable<'e'> : std::integral_constant<std::uint8_t, 14> {};
        template<> struct AsciiDigitTable<'f'> : std::integral_constant<std::uint8_t, 15> {};
        template<> struct AsciiDigitTable<'g'> : std::integral_constant<std::uint8_t, 16> {};
        template<> struct AsciiDigitTable<'h'> : std::integral_constant<std::uint8_t, 17> {};
        template<> struct AsciiDigitTable<'i'> : std::integral_constant<std::uint8_t, 18> {};
        template<> struct AsciiDigitTable<'j'> : std::integral_constant<std::uint8_t, 19> {};
        template<> struct AsciiDigitTable<'k'> : std::integral_constant<std::uint8_t, 20> {};
        template<> struct AsciiDigitTable<'l'> : std::integral_constant<std::uint8_t, 21> {};
        template<> struct AsciiDigitTable<'m'> : std::integral_constant<std::uint8_t, 22> {};
        template<> struct AsciiDigitTable<'n'> : std::integral_constant<std::uint8_t, 23> {};
        template<> struct AsciiDigitTable<'o'> : std::integral_constant<std::uint8_t, 24> {};
        template<> struct AsciiDigitTable<'p'> : std::integral_constant<std::uint8_t, 25> {};
        template<> struct AsciiDigitTable<'q'> : std::integral_constant<std::uint8_t, 26> {};
        template<> struct AsciiDigitTable<'r'> : std::integral_constant<std::uint8_t, 27> {};
        template<> struct AsciiDigitTable<'s'> : std::integral_constant<std::uint8_t, 28> {};
        template<> struct AsciiDigitTable<'t'> : std::integral_constant<std::uint8_t, 29> {};
        template<> struct AsciiDigitTable<'u'> : std::integral_constant<std::uint8_t, 30> {};
        template<> struct AsciiDigitTable<'v'> : std::integral_constant<std::uint8_t, 31> {};
        template<> struct AsciiDigitTable<'w'> : std::integral_constant<std::uint8_t, 32> {};
        template<> struct AsciiDigitTable<'x'> : std::integral_constant<std::uint8_t, 33> {};
        template<> struct AsciiDigitTable<'y'> : std::integral_constant<std::uint8_t, 34> {};
        template<> struct AsciiDigitTable<'z'> : std::integral_constant<std::uint8_t, 35> {};

    }
}
