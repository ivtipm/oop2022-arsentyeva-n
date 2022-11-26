// @author: Natalya Arsentyeva
#include "pch.h"
#include "../figure_relations/circle.h"
#include "../figure_relations/figures.h"
#include "../figure_relations/triangle.h"


/// ������������ �������� ������ ������������
TEST(TestFigureRelations, TestGet_ABC) {
	Triangle f1(2, 3, 4);
	EXPECT_EQ(f1.get_a(), 2);
	EXPECT_EQ(f1.get_b(), 3);
	EXPECT_EQ(f1.get_c(), 4);

	Triangle f2(5, 7, 10);
	EXPECT_EQ(f2.get_a(), 5);
	EXPECT_EQ(f2.get_b(), 7);
	EXPECT_EQ(f2.get_c(), 10);
}

/// ���� �� ������ ��������� ������������
TEST(TestFigureRelations, TestPerimeter) {
	Triangle f1(2, 3, 4);
	EXPECT_EQ(f1.perimeter(), 9);

	Triangle f2(5, 7, 10);
	EXPECT_EQ(f2.perimeter(), 22);
}

/// ���� �� ������ ������� ������������
TEST(TestFigureRelations, TestArea) {
	Triangle f1(3, 4, 5);
	EXPECT_EQ(f1.area(), 6);

	Triangle f2(5, 6, 5);
	EXPECT_EQ(f2.area(), 12);

	//Triangle f3(5, 6, 5);
	//EXPECT_EQ(f3.perimeter(), 2);
}

/// ���� �� ���������� ������ ������������ �� ��� �������
TEST(TestFigureRelations, TestHight) {
	Triangle f1(3, 4, 5);
	EXPECT_EQ(f1.hightA(), 4);
	EXPECT_EQ(f1.hightB(), 3);
	/*EXPECT_EQ(f1.hightC(), 2.4);*/ //????

}
