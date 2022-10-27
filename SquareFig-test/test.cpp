#include "pch.h"
#include "../ClassSquareFig/SquareFig.h"

TEST(TestClassSquareFig, TestSideLen) {
	SquareFig f1(2, 2, 2, 6, -2, 6, -2, 2);
	//SquareFig f2(0, 3, 3, 0, 0, -3, -3, 0);
	SquareFig f3(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f1.side_lengths(), 4);
	//EXPECT_EQ(f2.side_lengths(), 2.24264);
	EXPECT_EQ(f3.side_lengths(), 2.5);
	//EXPECT_TRUE(true);
}


TEST(TestClassSquareFig, TestPerimetr) {
	SquareFig f(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f.perimeter(), 10);
	//EXPECT_TRUE(true);
}

TEST(TestClassSquareFig, TestArea) {
	SquareFig f(0, 3, 3, 0, 0, -3, -3, 0);
	EXPECT_EQ(f.area(), 18);
	//EXPECT_TRUE(true);
}
