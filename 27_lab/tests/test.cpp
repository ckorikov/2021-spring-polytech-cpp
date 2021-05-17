#include "gtest/gtest.h"
#include "SharedPtr.cpp"

TEST(sharedPtr, Initialisation)
{
    int* num=new int(31);

    {
        SharedPtr<int> a(num);

        EXPECT_EQ(*a.Get(), 31);
        EXPECT_EQ(a.GetOwners(), 1);
    }
    EXPECT_FALSE(*num==31);
}

TEST(sharedPtr, CopyingViaConstructor)
{
    int* num=new int(111);
    {
        SharedPtr<int> a(num);

        SharedPtr<int> b(a);

        EXPECT_EQ(*b.Get(), 111);
        EXPECT_EQ(a.GetOwners(), 2);
        EXPECT_EQ(b.GetOwners(), 2);

        EXPECT_EQ(a.GetOwners(), b.GetOwners());
        EXPECT_EQ(*a.Get(), *b.Get());
    }
    EXPECT_FALSE(*num==111);
}

TEST(sharedPtr, CopyingViaEquals)
{
    int* num=new int(456);
    {
        SharedPtr<int> a(num);

        SharedPtr<int> b = a;

        EXPECT_EQ(*b.Get(), 456);
        EXPECT_EQ(a.GetOwners(), 2);
        EXPECT_EQ(b.GetOwners(), 2);

        EXPECT_EQ(a.GetOwners(), b.GetOwners());
        EXPECT_EQ(*a.Get(), *b.Get());
    }
    EXPECT_FALSE(*num==456);
}

TEST(sharedPtr, SavingPointer)
{
    int* num=new int(-4);
    {
        SharedPtr<int> a(num);
        {
            SharedPtr<int> b = a;
            EXPECT_EQ(a.GetOwners(), 2);
        }

        EXPECT_EQ(a.GetOwners(), 1);
        EXPECT_EQ(*a.Get(), -4);
    }
    EXPECT_FALSE(*num==-4);
}

TEST(sharedPtr, SavingArray)
{
    int* num=new int[3];
    num[0] = 4;
    num[1] = 12;
    num[2] = -1000;
    {
        SharedPtr<int> a(num);
        {
            SharedPtr<int> b = a;
            EXPECT_EQ(a.GetOwners(), 2);
            EXPECT_EQ(b.Get()[2], -1000);
        }

        EXPECT_EQ(a.GetOwners(), 1);
        EXPECT_EQ(a.Get()[1], 12);
    }

    EXPECT_FALSE(*num==4);
    EXPECT_FALSE(*(num+1)==12);
}

TEST(sharedPtr, ChangingPointer)
{
    int* num1=new int[2];
    int* num2=new int(228);

    num1[0] = 100;
    num1[1] = -100;

    {
        SharedPtr<int> a(num1);
        SharedPtr<int> b(num2);

        a = SharedPtr<int>(b);

        EXPECT_EQ(a.GetOwners(), 2);
        EXPECT_EQ(a.GetOwners(), b.GetOwners());

        EXPECT_FALSE(*num1 == 100);
        EXPECT_FALSE(*(num1+1) == -100);
    }
    EXPECT_FALSE(*num2 == 228);
}

