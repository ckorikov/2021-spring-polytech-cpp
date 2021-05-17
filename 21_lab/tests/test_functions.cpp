#include "functions.h"
#include "gtest/gtest.h"

// Тесты тут
TEST(test, Single) {
    int number[1] = {1};
    EXPECT_EQ(Max_number(number, 1), 1);

    EXPECT_EQ(Min_number(number, 1), 1);

    EXPECT_EQ(Number_repetition(number, 1, 1), 1);
    EXPECT_EQ(Number_repetition(number, 1, 2), 0);
}

TEST(test, Multi_positive) {
    int number[6] = {1, 2, 2, 3, 3, 3,};
    EXPECT_EQ(Max_number(number, 6), 3);

    EXPECT_EQ(Min_number(number, 6), 1);

    EXPECT_EQ(Number_repetition(number, 6, 1), 1);
    EXPECT_EQ(Number_repetition(number, 6, 2), 2);
    EXPECT_EQ(Number_repetition(number, 6, 3), 3);
    EXPECT_EQ(Number_repetition(number, 6, 0), 0);
}

TEST(test, Multi_mix) {
    int number[7] = {1, -2, -2, 3, -3, 3, 0};
    EXPECT_EQ(Max_number(number, 7), 3);

    EXPECT_EQ(Min_number(number, 7), -3);

    EXPECT_EQ(Number_repetition(number, 7, 1), 1);
    EXPECT_EQ(Number_repetition(number, 7, 2), 0);
    EXPECT_EQ(Number_repetition(number, 6, -2), 2);
    EXPECT_EQ(Number_repetition(number, 7, 3), 2);
}