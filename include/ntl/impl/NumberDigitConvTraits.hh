#pragma once

#include "Helpers.hh"

#include <cstddef>
#include <cstdint>
#include <cmath>
#include <type_traits>

namespace ntl::impl::traits {
    template<class T, bool minusCounted = false>
    struct NumberDigitConvTraits : public Traits {
        static_assert(std::is_integral_v<T>, "Invalid forwarded type!");
        static_assert(!(std::is_unsigned_v<T> && minusCounted), "Invalid template arguments");
    public:
        using SizeType = std::size_t;
        using BaseType = std::uint8_t;
        using DigitType = std::uint8_t;

        static SizeType countDigits(T n, BaseType base) {
            SizeType result { 0 };

            if constexpr (minusCounted)
                if (result < 0)
                    result++;

            do {
                n /= base;

                result++;
            } while (n != T { 0 });

            return result;
        }
    
        template<class View>
        inline static View getDigit(T n, SizeType index, BaseType base) {
            if constexpr (minusCounted && std::is_same_v<View, char>)
                if (n < 0 && index == 1)
                    return '-';

            const DigitType intView = (n / std::pow(base, index)) % base;

            if constexpr (std::is_integral_v<View>)
                return intView;
            else if constexpr (std::is_same_v<View, char>)
                return intView + '0';
            else
                static_assert(alwaysFalse<View>, "Unsupported view!");
        }
    };
}
