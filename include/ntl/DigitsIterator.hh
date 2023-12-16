#pragma once

#include <limits>

#include "impl/NumberDigitConvTraits.hh"

namespace ntl {
    template<class View, class T, bool minusCounted = false, class ConvTraits = impl::traits::NumberDigitConvTraits<T, minusCounted>>
    class DigitsIterator {
        static constexpr std::size_t UNDEFINED { std::numeric_limits<std::size_t>::max() };
    public:
     
    };
}
