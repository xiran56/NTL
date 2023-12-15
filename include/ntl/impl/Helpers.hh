#pragma once

namespace ntl::impl {
    template<class>
    inline constexpr bool alwaysFalse { false };

    class Traits {
    public:
        Traits() = delete;
        ~Traits() = delete;
    };
}
