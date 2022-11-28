// @author: Natalya Arsentyeva
#include "pch.h"
#include "../figure_relations/circle.h"
#include "../figure_relations/figures.h"
#include "../figure_relations/triangle.h"


/// Правильность вводимых данных трегуольника
TEST(TestFigureRelations, TestGet_ABC) {
	Triangle f1(2, 3, 4);
	EXPECT_EQ(f1.get_a(), 2);
	EXPECT_EQ(f1.get_b(), 3);
	EXPECT_EQ(f1.get_c(), 4);

	Triangle f2(5.2, 7, 10);
	EXPECT_EQ(f2.get_a(), 5.2f);
	EXPECT_EQ(f2.get_b(), 7);
	EXPECT_EQ(f2.get_c(), 10);
}

/// Тест на расчёт периметра треугольника
TEST(TestFigureRelations, TestPerTriangle) {
	Triangle f1(2, 3, 4);
	EXPECT_EQ(f1.perimeter(), 9);

	Triangle f2(5, 7, 10);
	EXPECT_EQ(f2.perimeter(), 22);

	Triangle f3(6.2, 5, 10);
	EXPECT_EQ(f3.perimeter(), 21.2f);
}

/// Тест на расчёт площади треугольника
TEST(TestFigureRelations, TestAreaTriangle) {
	Triangle f1(3, 4, 5);
	EXPECT_EQ(f1.area(), 6);

	Triangle f2(5, 6, 5);
	EXPECT_EQ(f2.area(), 12);

	Triangle f3(16, 27, 18);
	EXPECT_EQ(f3.area(), 139.098663f);
}

/// Тест на нахождение высоты треугольника на все стороны
TEST(TestFigureRelations, TestHight) {
	Triangle f1(3, 4, 5);
	EXPECT_EQ(f1.hightA(), 4);
	EXPECT_EQ(f1.hightB(), 3);
	EXPECT_EQ(f1.hightC(), 2.4f); //????

	Triangle f2(5, 6, 5);
	EXPECT_EQ(f2.hightA(), 4.8f);
	EXPECT_EQ(f2.hightB(), 4);
	EXPECT_EQ(f2.hightC(), 4.8f); 
}

/// Правильность вводимых данных окружности
TEST(TestFigureRelations, TestGet_R) {
	Circle f1(2);
	EXPECT_EQ(f1.get_R(), 2);

	Circle f2(20.23);
	EXPECT_EQ(f2.get_R(), 20.23f);
}

/// Тест на рассчёт периметра окружности
TEST(TestFigureRelations, TestPerCircle) {
	Circle f1(7);
	EXPECT_EQ(f1.perimeter(), 43.982296f);

	Circle f2(10);
	EXPECT_EQ(f2.perimeter(), 62.831852f);
}

/// Тест на рассчёт площади окружности
TEST(TestFigureRelations, TestAreaCircle) {
	Circle f1(8);
	EXPECT_EQ(f1.area(), 201.061935f);

	Circle f2(3);
	EXPECT_EQ(f2.area(), 28.274334f);
}

/// Тест на рассчёт диаметра окружности
TEST(TestFigureRelations, TestDiametr) {
	Circle f1(8.5);
	EXPECT_EQ(f1.diametr(), 17);

	Circle f2(3);
	EXPECT_EQ(f2.diametr(), 6);
}

/// Проверка на бросание исключение в классе треугольник
TEST(TestFigureRelations, TestGetABCExeption) {
	Triangle f1;
	try {
		f1.set_ABC(9, 10, 20);
		FAIL() << "Error: sides are set incorrectly, triangle does not exist";
	}
	catch (const std::invalid_argument& e) {

	}
}


// Тест на бросание исключения
TEST(TestClassSquareFig, TestExpGet_R) {
	Circle f1;
	try {
		f1.set_R(0);
		FAIL() << "Error: R are set incorrectly, circle does not exist";
	}
	catch (const std::invalid_argument& e) {

	}
}