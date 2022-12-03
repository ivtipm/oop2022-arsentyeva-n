// @author: Natalya Arsentyeva
#include "pch.h"
#include "../figure_relations/circle.h"
#include "../figure_relations/figures.h"
#include "../figure_relations/triangle.h"
const float E = 0.000001;

/// Правильность вводимых данных трегуольника
TEST(TestFigureRelations, TestGet_ABC) {
	Triangle f1(2, 3, 4);
	EXPECT_NEAR(2, f1.get_a(),E);
	EXPECT_NEAR(3, f1.get_b(),E);
	EXPECT_NEAR(4, f1.get_c(), E);

	Triangle f2(5.2, 7, 10);
	EXPECT_NEAR( 5.2, f2.get_a(), E);
	EXPECT_NEAR(7, f2.get_b(), E);
	EXPECT_NEAR(10, f2.get_c(), E);
}

/// Тест на расчёт периметра треугольника
TEST(TestFigureRelations, TestPerTriangle) {
	Triangle f1(2, 3, 4);
	EXPECT_NEAR(9, f1.perimeter(), E);

	//Triangle f2(5, 7, 10);

	Triangle f3(6.2, 5, 10);
	EXPECT_NEAR(21.2, f3.perimeter(), E);
}

/// Тест на расчёт площади треугольника
TEST(TestFigureRelations, TestAreaTriangle) {
	Triangle f1(3, 4, 5);
	EXPECT_NEAR(6, f1.area(), E);

	Triangle f2(5, 6, 5);
	EXPECT_NEAR(12, f2.area(), E);

	Triangle f3(16, 27, 18);
	EXPECT_NEAR(f3.area(), 139.098663, E);
}

/// Тест на нахождение высоты треугольника на все стороны
TEST(TestFigureRelations, TestHight) {
	Triangle f1(3, 4, 5);
	EXPECT_NEAR(f1.hightA(), 4, E);
	EXPECT_NEAR(f1.hightB(), 3, E);
	EXPECT_NEAR(f1.hightC(), 2.4f, E); 

	Triangle f2(5, 6, 5);
	EXPECT_NEAR(f2.hightA(), 4.8, E);
	EXPECT_NEAR(f2.hightB(), 4, E);
	EXPECT_NEAR(f2.hightC(), 4.8, E); 
}

/// Правильность вводимых данных окружности
TEST(TestFigureRelations, TestGet_R) {
	Circle f1(2);
	EXPECT_NEAR(f1.get_R(), 2, E);

	Circle f2(20.23);
	EXPECT_NEAR(f2.get_R(), 20.23, E);
}

/// Тест на рассчёт периметра окружности
TEST(TestFigureRelations, TestPerCircle) {
	Circle f1(7);
	EXPECT_NEAR(f1.perimeter(), 43.982296, E);

	Circle f2(10);
	EXPECT_NEAR(f2.perimeter(), 62.831852, E);
}

/// Тест на рассчёт площади окружности
TEST(TestFigureRelations, TestAreaCircle) {
	Circle f1(8);
	EXPECT_NEAR(f1.area(), 201.061935, E);

	Circle f2(3);
	EXPECT_NEAR(f2.area(), 28.274334, E);
}

/// Тест на рассчёт диаметра окружности
TEST(TestFigureRelations, TestDiametr) {
	Circle f1(8.5);
	EXPECT_NEAR(f1.diametr(), 17, E);

	Circle f2(3);
	EXPECT_NEAR(f2.diametr(), 6, E);
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