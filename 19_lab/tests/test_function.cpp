#include "function.h"
#include "gtest/gtest.h"

TEST(testSum, checkValues) {
    EXPECT_EQ(sum(0, 0), 0.0);
}


TEST(testSum, checkValues2) {
    double x = 1.0;
    EXPECT_EQ(sum(0, 1), x);
}

