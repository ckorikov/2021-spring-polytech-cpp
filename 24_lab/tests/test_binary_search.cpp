#include "gtest/gtest.h"
#include <vector>

TEST(testBinarySearch, empty) {
    int array[] = {};
    EXPECT_EQ(find(array, 0, 1, true), -1);
    EXPECT_EQ(find(array, 0, 1), -1);
}

TEST(testBinarySearch, simple) {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    EXPECT_EQ(find(array, 10, 1, true), 0);
    EXPECT_EQ(find(array, 10, 10, true), 9);
    EXPECT_EQ(find(array, 10, 5, true), 4);

    EXPECT_EQ(find(array, 10, 1), 0);
    EXPECT_EQ(find(array, 10, 10), 9);
    EXPECT_EQ(find(array, 10, 5), 4);
}


TEST(testBinarySearch, big) {
    size_t size = 120'000'000;
    std::vector<int> data(size);
    // Заполняем вектор от 0 до data.size()-1
    std::generate(data.begin(), data.end(), [n = 0] () mutable { return n++; });

    // &data[0] возвращает адрес динамического массива std::vector
    EXPECT_EQ(find(&data[0], size, 110832, true), 110832);
    EXPECT_EQ(find(&data[0], size, 110832), 110832);
}