#include <gtest/gtest.h>

#include "ntl/simple_base_literals.hh"

TEST(NtlTests, literalTest) {
    using ntl::impl::operator""_4;

    EXPECT_EQ(123_4, 27);
}
