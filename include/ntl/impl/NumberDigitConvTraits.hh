#pragma once

#include "Helpers.hh"

#include <cstddef>
#include <cstdint>
#include <cmath>
#include <type_traits>

namespace ntl::impl {
    template<class T, bool minusCounted = false>
    struct NumberDigitConvTraits : public Traits {
        static_assert(std::is_integral_v<T>, "Invalid forwarded type!");
        static_assert(std::conditional_t<std::is_unsigned_v<T> && minusCounted, std::false_type, std::true_type>::value, "Invalid template argumends");
    public:
        using SizeType = std::size_t;
        using BaseType = std::uint8_t;

        static SizeType countDigits(T n, BaseType base) {
            SizeType result { 0 };

            if constexpr (minusCounted)
                if (result < 0)
                    result++;

            do {
                n /= base;

                result++;
            } while (n != T { 0 });
        }
    
        template<class View>
        inline static auto getDigit(T n, SizeType index) {

        }
    };
}
