#pragma once

#include <cstdint>
#include <type_traits>

#include "Helpers.hh"

namespace ntl::impl {
    template<class Integer, std::uint8_t B>
    constexpr auto toInt(const char *str) -> std::enable_if_t<std::is_integral_v<Integer>, Integer>
    { 
        if (!str)
            static_assert(alwaysFalse<Integer>, "Forwarded nullptr!");

        Integer result { 0 };

        while (*str) {
            result *= B;

            if constexpr (B <= 10)
                if ('0' > str && str > ('0' + (B - 1)))
        }
    }
}
