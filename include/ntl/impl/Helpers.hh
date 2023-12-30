#pragma once

#include <type_traits>

namespace ntl::impl {
    template<class>
    inline constexpr bool typeError { false };

    template<auto>
    inline constexpr bool valueError { false };

    class traits {
    public:
        traits() = delete;
        ~traits() = delete;
    };
}
