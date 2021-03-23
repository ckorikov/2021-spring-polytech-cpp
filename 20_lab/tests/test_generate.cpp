#include "functions.h"
#include "gtest/gtest.h"

TEST(testGenerate, Single) {
    int array[1];
    generate(array, 1);
    EXPECT_EQ(array[0], 0);
}

TEST(testGenerate, NonEmpty) {
    int array[5];
    generate(array, 5);

    EXPECT_EQ(array[0], 0);
    EXPECT_EQ(array[1], 1);
    EXPECT_EQ(array[2], 2);
    EXPECT_EQ(array[3], 3);
    EXPECT_EQ(array[4], 4);
}

