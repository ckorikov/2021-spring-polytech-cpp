#include "gtest/gtest.h"
#include <circle.h>
#include <rectangle.h>
#include <square.h>
#include <line.h>

TEST(testCircle, zero) {
    testing::internal::CaptureStdout();
    Circle a(0);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 " \n");
}

TEST(testCircle, small) {
    testing::internal::CaptureStdout();
    Circle a(1);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  \n");

}

TEST(testCircle, normal) {
    testing::internal::CaptureStdout();
    Circle a(3);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "   *  *  *     \n"
                 "*  *  *  *  *  \n"
                 "*  *  *  *  *  \n"
                 "*  *  *  *  *  \n"
                 "   *  *  *     \n");
}

TEST(testCircle, big) {
    testing::internal::CaptureStdout();
    Circle a(7);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "            *  *  *  *  *              \n"
                 "      *  *  *  *  *  *  *  *  *        \n"
                 "   *  *  *  *  *  *  *  *  *  *  *     \n"
                 "   *  *  *  *  *  *  *  *  *  *  *     \n"
                 "*  *  *  *  *  *  *  *  *  *  *  *  *  \n"
                 "*  *  *  *  *  *  *  *  *  *  *  *  *  \n"
                 "*  *  *  *  *  *  *  *  *  *  *  *  *  \n"
                 "*  *  *  *  *  *  *  *  *  *  *  *  *  \n"
                 "*  *  *  *  *  *  *  *  *  *  *  *  *  \n"
                 "   *  *  *  *  *  *  *  *  *  *  *     \n"
                 "   *  *  *  *  *  *  *  *  *  *  *     \n"
                 "      *  *  *  *  *  *  *  *  *        \n"
                 "            *  *  *  *  *              \n");
}


TEST(testSquare, zero) {
    testing::internal::CaptureStdout();
    Square a(0);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 " \n");
}

TEST(testSquare, normal) {
    testing::internal::CaptureStdout();
    Square a(5);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  *  *  *  \n"
                 "*           *  \n"
                 "*           *  \n"
                 "*           *  \n"
                 "*  *  *  *  *  \n");
}

TEST(testSquare, small) {
    testing::internal::CaptureStdout();
    Square a(2);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  \n"
                 "*  *  \n");
}

TEST(testRectangle, zero) {
    testing::internal::CaptureStdout();
    Rectangle a(0, 0);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 " \n");
}

TEST(testRectangle, small) {
    testing::internal::CaptureStdout();
    Rectangle a(2, 2);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  \n"
                 "*  *  \n");
}

TEST(testRectangle, normal) {
    testing::internal::CaptureStdout();
    Rectangle a(8, 4);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  *  *  *  *  *  *  \n"
                 "*                    *  \n"
                 "*                    *  \n"
                 "*  *  *  *  *  *  *  *  \n");
}

TEST(testRectangle, long) {
    testing::internal::CaptureStdout();
    Rectangle a(7, 2);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  *  *  *  *  *  \n"
                 "*  *  *  *  *  *  *  \n");
}

TEST(testRectangle, high) {
    testing::internal::CaptureStdout();
    Rectangle a(2, 5);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  \n"
                 "*  *  \n"
                 "*  *  \n"
                 "*  *  \n"
                 "*  *  \n");
}

TEST(testLine, zero) {
    testing::internal::CaptureStdout();
    Line a(0, 0, 0, 0);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  \n");
}

TEST(testLine, normal) {
    testing::internal::CaptureStdout();
    Line a(0, 0, 4, 4);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*              \n"
                 "   *           \n"
                 "      *        \n"
                 "         *     \n"
                 "            *  \n");
    a.SetXY(0, 0, 1, 1);
    testing::internal::CaptureStdout();
    a.draw();
    output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*     \n"
                 "   *  \n");
    a.SetXY(2, 2, 4, 4);
    testing::internal::CaptureStdout();
    a.draw();
    output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "               \n"
                 "               \n"
                 "      *        \n"
                 "         *     \n"
                 "            *  \n");

    a.SetXY(0, 0, 4, 0);
    testing::internal::CaptureStdout();
    a.draw();
    output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  *  *  *  \n");
}


TEST(testLine, invert) {
    testing::internal::CaptureStdout();
    Line a(4, 4, 0, 0);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*              \n"
                 "   *           \n"
                 "      *        \n"
                 "         *     \n"
                 "            *  \n");

    a.SetXY(4, 1, 0, 1);
    testing::internal::CaptureStdout();
    a.draw();
    output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "               \n"
                 "*  *  *  *  *  \n");

    a.SetXY(1, 4, 1, 0);
    testing::internal::CaptureStdout();
    a.draw();
    output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "   *  \n"
                 "   *  \n"
                 "   *  \n"
                 "   *  \n"
                 "   *  \n");

    a.SetXY(2, 2, 0, 4);
    testing::internal::CaptureStdout();
    a.draw();
    output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "         \n"
                 "         \n"
                 "      *  \n"
                 "   *     \n"
                 "*        \n");
}

TEST(testLine, not_normal) {
    testing::internal::CaptureStdout();
    Line a(0, 0, 4, 1);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*  *  *        \n"
                 "         *  *  \n");
    a.SetXY(1, 2, 4, 0);
    testing::internal::CaptureStdout();
    a.draw();
    output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "            *  \n"
                 "      *  *     \n"
                 "   *           \n");
}


