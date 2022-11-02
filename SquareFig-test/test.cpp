// @author: Natalya Arsentyeva
#include "pch.h"
#include "../ClassSquareFig/SquareFig.h"
#include <stdexcept>


/// ���� �� ���������� ������
TEST(TestClassSquareFig, TestSideLen) {
	SquareFig f1(2, 2, 2, 6, -2, 6, -2, 2);
	EXPECT_EQ(f1.side_lengths(), 4);

	SquareFig f2(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f2.side_lengths(), 2.5);

	//// ���� �� �������� ����������
	//SquareFig f3;
	//try {
	//	f3.set_coordinates(1, 3, 1, 0, 0, 0, 0, 1);
	//	FAIL() << "Error: sides are set incorrectly, square does not exist";
	//}
	//catch (SecondsException& err) {
	//	EXPECT_EQ(err,invalid_argument );
	//}
}


/// ���� �� ���������� ���������
TEST(TestClassSquareFig, TestPerimetr) {
	SquareFig f(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f.perimeter(), 10);

	SquareFig f2(2, 2, 2, 6, -2, 6, -2, 2);
	EXPECT_EQ(f2.perimeter(), 16);
}


/// ���� �� ���������� �������
TEST(TestClassSquareFig, TestArea) {
	SquareFig f(0, 3, 3, 0, 0, -3, -3, 0);
	EXPECT_EQ(f.area(), 18);

	SquareFig f2(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f2.area(), 6.25);
}


/// ���� �� �������������� � ������
TEST(TestClassSquareFig, TestString) {
	SquareFig f(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5);
	EXPECT_EQ(f.to_string(), "lengths side = 2.500000 cm; P = 10.000000 cm; S = 6.250000 cm2");
}