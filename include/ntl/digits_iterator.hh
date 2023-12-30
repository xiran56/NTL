#pragma once

#include <limits>
#include <type_traits>

namespace ntl {
    template<class T, class Traits>
    class digit_iterator {
        static_assert(std::is_integral<T>::value, "T is not an integral type!");

        enum {
            undefined = 36
        };
    };
}
