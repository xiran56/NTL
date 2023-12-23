#include <gtest/gtest.h>

#include "ntl/impl/NumberDigitConvTraits.hh"

namespace traits = ntl::impl::traits;

TEST(NtlTests, hexTest) {
    EXPECT_EQ(traits::NumberDigitConvTraits<int>::getDigit<char>(0xC, 0, 16), 'C');
}
