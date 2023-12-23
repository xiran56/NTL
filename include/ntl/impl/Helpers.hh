#pragma once

#include <type_traits>

namespace ntl {
    template<class>
    struct AlwaysFalse : std::false_type {};

    template<class T, T>
    struct AlwaysFalseValue : std::false_type {};

    namespace impl {
        class Traits {
        public:
            Traits() = delete;
            ~Traits() = delete;
        };
    }
}
