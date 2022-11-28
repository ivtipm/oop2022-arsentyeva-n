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
	if ((a1 <= 0) || (b1 <= 0) || (c1<=0) || (a1 + b1 <= c1) || (a1 + c1 <= b1) || (c1 + b1 <= a1))  { 
		throw std::invalid_argument("Error: sides are set incorrectly, triangle does not exist"); }
	a = a1;
	b = b1;
	c = c1;
};


/// Вывести стороны
float Triangle::get_a() const {return a ;};
float Triangle::get_b() const { return b; };
float Triangle::get_c() const { return c; };


/// Найти периметр
float Triangle::perimeter() const { return a + b + c; };

/// Найти площадь
float Triangle::area() const { 
	float p;
	p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c)); };

/// Найти высоту треугольника на сторону с
float Triangle::hightC() const{
	float s;
	s = area();
	return 2 * s / c; 
};

/// Найти высоту треугольника на сторону a
float Triangle::hightA() const {
	float s;
	s = area();
	return 2 * s / a;
};

/// Найти высоту треугольника на сторону b
float Triangle::hightB() const {
	float s;
	s = area();
	return 2 * s / b;
};

/// Преобразование в строку
std::string Triangle::to_string() const {
	return  "a = " + std::to_string(a) + "; b = " + std::to_string(b) + "; c = " + std::to_string(c) + "; P = " + std::to_string(perimeter()) + " cm; S = " + std::to_string(area()) + " cm2; h = " + std::to_string(hightC()) + " cm";
};