// @author: Natalya Arsentyeva
#include "pch.h"
#include "../ClassSquareFig/SquareFig.h"

/// Тест на задание сторон
TEST(TestClassSquareFig, TestSideLen) {
	SquareFig f1(2, 2, 2, 6, -2, 6, -2, 2);
	EXPECT_EQ(f1.side_lengths(), 4);
	SquareFig f3(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f3.side_lengths(), 2.5);
	//SquareFig f2(0, 3, 3, 0, 0, -3, -3, 0);
	//EXPECT_EQ(f2.side_lengths(), fabs(f2.side_lengths()-4.24264) < FLT_EPSILON);
	//SquareFig f4(1, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	//EXPECT_EQ(f4.side_lengths(), invalid_argument("Error: sides are set incorrectly, square does not exist"));

	// todo
}

/// Тест на вычисление периметра
TEST(TestClassSquareFig, TestPerimetr) {
	SquareFig f(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f.perimeter(), 10);
}

/// Тест на вычисление площади
TEST(TestClassSquareFig, TestArea) {
	SquareFig f(0, 3, 3, 0, 0, -3, -3, 0);
	EXPECT_EQ(f.area(), 18);
}

/// Тест на преобразование в строку
TEST(TestClassSquareFig, TestString) {
	SquareFig f(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f.to_string(), "lengths side = 2.500000 cm; P = 10.000000 cm; S = 6.250000 cm2");
}