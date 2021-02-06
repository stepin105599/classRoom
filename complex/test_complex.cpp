#include<gtest/gtest.h>
#include "Complex.h"
namespace{

    TEST(Point, empty_cont){
        Complex<int> c1;
        EXPECT_EQ(0,c1.getReal());
    }
    TEST(Point, copy_const){
        Complex<int> c1(25,533);
        EXPECT_EQ(25,c1.getReal());
        EXPECT_EQ(533,c1.getImag());

    }
    TEST(Point, copy_var){
        Complex<int> c1(-10000,10000);
        // EXPECT_EQ(25,c1.getReal());
        // EXPECT_EQ(533,c1.getImag());

        Complex<int> c2(c1);
        EXPECT_EQ(-10000,c1.getReal());
        EXPECT_EQ(10000,c1.getImag());
    }



}