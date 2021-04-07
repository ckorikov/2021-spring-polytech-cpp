#include "gtest/gtest.h"
#include <linked_list.h>

TEST(testLinkedList, size_add) {
    List lst{};
    EXPECT_EQ(size(lst), 0);
    add(lst, 0);
    EXPECT_EQ(size(lst), 1);
    add(lst, 1);
    EXPECT_EQ(size(lst), 2);
    delete_list(lst);
}


TEST(testLinkedList, print) {
    testing::internal::CaptureStdout();
    int list_size = 10;
    List lst{};
    for (int i = 0; i < list_size; ++i) {
        add(lst, i);
    }
    EXPECT_EQ(size(lst), list_size);
    print(lst);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), "0->1->2->3->4->5->6->7->8->9->[x]\n");
    delete_list(lst);
}

TEST(testLinkedList, compare) {
    int list_size = 10;
    List lst_a{}, lst_b{}, lst_c{};
    for (int i = 0; i < list_size; ++i) {
        add(lst_a, i);
        add(lst_b, i);
        add(lst_c, 10+i);
    }
    EXPECT_EQ(size(lst_a), list_size);
    EXPECT_EQ(size(lst_b), list_size);
    EXPECT_EQ(size(lst_c), list_size);

    EXPECT_TRUE(compare(lst_a, lst_a));
    EXPECT_TRUE(compare(lst_b, lst_b));
    EXPECT_TRUE(compare(lst_c, lst_c));

    EXPECT_TRUE(compare(lst_a, lst_b));
    EXPECT_FALSE(compare(lst_a, lst_c));
    EXPECT_FALSE(compare(lst_b, lst_c));

    delete_list(lst_a);
    delete_list(lst_b);
    delete_list(lst_c);
}

TEST(testLinkedList, concat) {
    List lst_a{}, lst_b{}, lst_c{};
    for(auto& val: {0, 1, 2, 3, 4}) add(lst_a, val);
    for(auto& val: {5, 6, 7, 8, 9}) add(lst_b, val);
    for(auto& val: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}) add(lst_c, val);

    auto concat_lst = concat(lst_a, lst_b);
    EXPECT_TRUE(compare(concat_lst, lst_c));

    delete_list(lst_a);
    delete_list(lst_b);
    delete_list(lst_c);
    delete_list(concat_lst);
}


TEST(testLinkedList, merge) {
    List lst_a{}, lst_b{}, lst_c{};
    for(auto& val: {0, 1, 3, 4, 7, 10}) add(lst_a, val);
    for(auto& val: {2, 5, 6, 8, 9}) add(lst_b, val);
    for(auto& val: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) add(lst_c, val);

    auto merged_lst = concat(lst_a, lst_b);
    EXPECT_TRUE(compare(merged_lst, lst_c));

    delete_list(lst_a);
    delete_list(lst_b);
    delete_list(lst_c);
    delete_list(merged_lst);
}


TEST(testLinkedList, duplicate) {
    List lst_a{}, lst_b{};
    for(auto& val: {0, 1, 2, 3, 4}) add(lst_a, val);
    for(auto& val: {0, 0, 1, 1, 2, 2, 3, 3, 4, 4}) add(lst_b, val);

    auto duplicated_lst = duplicate(lst_a);
    EXPECT_TRUE(compare(duplicated_lst, lst_b));

    delete_list(lst_a);
    delete_list(lst_b);
    delete_list(duplicated_lst);
}