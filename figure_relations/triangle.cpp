// @author: Natalya Arsentyeva
#include "triangle.h"

/// Конструктор по умолчанию
Triangle::Triangle() { 
	a = 0; 
	b = 0; 
	c = 0; };

Triangle::Triangle(float a1, float b1, float c1) {
	set_ABC(a1,b1,c1);
};

/// Задать стороны
void Triangle::set_ABC(float a1, float b1, float c1) {
	if ((a1 <= 0) || (b1<=0) || (c1<=0)) { throw std::invalid_argument("Error: sides are set incorrectly, triangle does not exist"); }
	a = a1;
	b = b1;
	c = c1;
};

/// Найти периметр
float Triangle::perimeter() { return a + b + c; };

/// Найти площадь
float Triangle::area() { 
	float p;
	p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c)); };

/// Найти высоту треугольника
float Triangle::hight() {
	float s;
	s = area();
	return 2 * s / c;
};

/// Преобразование в строку
std::string Triangle::to_string() {
	return "h = " + std::to_string(hight()) + " cm; P = " + std::to_string(perimeter()) + " cm; S = " + std::to_string(area()) + " cm2";
};