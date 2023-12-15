#pragma once

#include "Helpers.hh"

#include <cstddef>
#include <cstdint>
#include <cmath>
#include <type_traits>

namespace ntl::impl {
    using SizeType = std::size_t;
    using BaseType = std::uint8_t;

    template<class T, class = void>
    struct NumberDigitConvTraits {
        static_assert(alwaysFalse<T>, "Invalid forwarded type!");
    };

    template<class Unsigned>
    struct NumberDigitConvTraits<Unsigned, std::enable_if_t<
            std::is_unsigned_v<Unsigned>
        >
    > {
        static SizeType countDigits(Unsigned n, BaseType base) {
            SizeType result { 0 };

            do {
                n /= base;

                result++;
            } while (n != Unsigned { 0 });

            return result;
        }

        inline static Unsigned getDigit(Unsigned n, SizeType index, BaseType base) {
            return (n / std::pow(base, n)) % base;
        }
    };

    template<class Signed>
    struct NumberDigitConvTraits<Signed, std::enable_if_t<
            std::is_signed_v<Signed>
        >
    > {
        static SizeType countDigits(Signed n, BaseType base, bool minusCounted) {
            SizeType result { 0 };

            if (minusCounted && n < 0)
                result++;

            do {
                n /= base;

                result++;
            } while (n != Signed { 0 });

            return result;
        }
    };
}
