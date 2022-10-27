#include "SquareFig.h"
#include "math.h"
#define _USE_MATH_DEFINES // вкл. математические константы


SquareFig::SquareFig() {
	a1 = 0;
	a2 = 0;
	b1 = 0;
	b2 = 0;
	c1 = 0;
	c2 = 0;
	d1 = 0;
	d2 = 0;
}


SquareFig::SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
	a1 = x1;
	a2 = y1;
	b1 = x2;
	b2 = y2;
	c1 = x3;
	c2 = y3;
	d1 = x4;
	d2 = y4;
}


/// Задать координаты
void SquareFig::set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
	float s1, s2, s3, s4, d1, d2;
	// Стороны
	s1 = pow((x2 - x1), 2) + pow((y2 - y1), 2);
	s2 = pow((x3 - x2), 2) + pow((y3 - y2), 2);
	s3 = pow((x4 - x3), 2) + pow((y4 - y3), 2);
	s4 = pow((x1 - x4), 2) + pow((y1 - y4), 2);
	// Диагонали
	d1 = pow((x3 - x1), 2) + pow((y3 - y1), 2);
	d2 = pow((x4 - x2), 2) + pow((y4 - y2), 2);
	// Сравнение длин сторон и диагоналей
	if ((fabs(s1 - s2) > FLT_EPSILON) || (fabs(s1 - s3) > FLT_EPSILON) || (fabs(s1 - s4) > FLT_EPSILON) || (fabs(d1 - d2) > FLT_EPSILON)) throw std::invalid_argument("Error: sides are set incorrectly, square does not exist");
	a1 = x1;
	a2 = y1;
	b1 = x2;
	b2 = y2;
	c1 = x3;
	c2 = y3;
	d1 = x4;
	d2 = y4;
}

/// Нахождение длины одной стороны
float SquareFig::side_lengths() {
	return sqrt((pow((b1 - a1), 2)) + pow((b2 - a2), 2));
}

/// Нахождение периметра
float SquareFig::perimeter() {
	return sqrt((pow((b1 - a1), 2)) + pow((b2 - a2), 2)) * 4;
}

/// Нахождение площади
float SquareFig::area() {
	return pow(sqrt((pow((b1 - a1), 2)) + pow((b2 - a2), 2)), 2);
}

/// Перевод в строку
std::string SquareFig::to_string() {
	return "lengths side = " + std::to_string(side_lengths()) + " cm; P = " + std::to_string(perimeter()) + " cm; S = " + std::to_string(area()) + " cm2";
}

// d=sqrt(sqr(x2-x1)+sqr(y2-y1))