#include "gtest/gtest.h"
#include <circle.h>
#include <rectangle.h>
#include <square.h>
#include <line.h>

TEST(testCircle, normal) {
    testing::internal::CaptureStdout();
    Circle a(4);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "  *  \n"
                 " *** \n"
                 "*****\n"
                 " *** \n"
                 "  *  \n");
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

TEST(testLine, normal) {
    testing::internal::CaptureStdout();
    Line a(0,0,4,4);
    a.draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(),
                 "*              \n"
                 "   *           \n"
                 "      *        \n"
                 "         *     \n"
                 "            *  \n");
}

TEST(testLine, invert) {
    testing::internal::CaptureStdout();
    Line a(0,0,4,4);
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
}