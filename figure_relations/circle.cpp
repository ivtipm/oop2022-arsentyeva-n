// @author: Natalya Arsentyeva
#include "circle.h"
#define M_PI 3.14159265358979323846 


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

/// Найти диаметр
float Circle::diametr() const { return 2 * R; };

/// Найти периметр
float Circle::perimeter() const { return 2 * R * M_PI; };

/// Найти площадь
float Circle::area() const { return R * R * M_PI; };
