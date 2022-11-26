// @author: Natalya Arsentyeva
#include "circle.h"
#include <numbers>

using std::numbers::pi;


/// Конструктор по умолчанию
Circle::Circle() {
	R = 0;
};

Circle::Circle(float R1) {
	set_R(R1);
};


/// Задать радиус
void Circle::set_R(float R1) { 
	if (R1 <= 0) { throw std::invalid_argument("Error: R are set incorrectly, circle does not exist"); }
	R = R1; 
};

/// Вывести радиус
float Circle::get_R() const { return R; };

/// Найти диаметр
float Circle::diametr() const { return 2 * R; };

/// Найти периметр
float Circle::perimeter() const { return 2 * R * pi; };

/// Найти площадь
float Circle::area() const { return R * R * pi; };

/// Преобразование в строку
std::string Circle::to_string() const {
	return   "R = " + std::to_string(R) + "; P = " + std::to_string(perimeter()) + " cm; S = " + std::to_string(area()) + " cm2; D = " + std::to_string(diametr()) + " cm";
};
