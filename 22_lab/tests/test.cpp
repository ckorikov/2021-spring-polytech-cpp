#include "functions.h"
#include "gtest/gtest.h"

TEST(testSearchArray, Single) {
    int array[] = {0};
    int size = 1;
    EXPECT_EQ(searchArray(array, size, 0), 0);
    EXPECT_EQ(searchArray(array, size, 1), -1);
}

TEST(testSearchArray, allValue) {
    int array[] = {-632, 0, 132, 3, 4242, -5, 0, 43, 256, 256, 3, 7};
    int size = 12;
    EXPECT_EQ(searchArray(array, size, 0), 1);
    EXPECT_EQ(searchArray(array, size, 256), 8);
    EXPECT_EQ(searchArray(array, size, -5), 5);
    EXPECT_EQ(searchArray(array, size, 7), 11);
    EXPECT_EQ(searchArray(array, size, 6), -1);
}