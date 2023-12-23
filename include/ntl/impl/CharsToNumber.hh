#pragma once

#include "AsciiDigitTable.hh"
#include "Helpers.hh"
#include <cstdint>
#include <type_traits>

namespace ntl {
    namespace impl {
        template<class T, T, bool, std::uint8_t, char...>
        struct CharsToNumber;

        template<class T, T Prev, bool Negative, std::uint8_t Base, char First, char... Chars>
        struct CharsToNumber<T, Prev, Negative, Base, First, Chars...>
            : std::integral_constant<T, CharsToNumber<T,
            (Prev * Base) + AsciiDigitTable<First>::value,
            Negative, Base, Chars...>::value>
        { static_assert(AsciiDigitTable<First>::value != InvalidDigit::value && AsciiDigitTable<First>::value < Base, "Invalid digit!"); };

        template<class T, T Prev, std::uint8_t Base, char... Chars>
        struct CharsToNumber<T, Prev, false, Base, '-', Chars...>
            : std::integral_constant<T, CharsToNumber<T, Prev, true, Base, Chars...>::value> 
        { static_assert(Prev == 0, "\"-\" isn't in begin of number"); };

        template<class T, T Prev, std::uint8_t Base>
        struct CharsToNumber<T, Prev, false, Base> : std::integral_constant<T, Prev> { };

        template<class T, T Prev, std::uint8_t Base>
        struct CharsToNumber<T, Prev, true, Base> : std::integral_constant<T, -Prev> { };
    }
}
