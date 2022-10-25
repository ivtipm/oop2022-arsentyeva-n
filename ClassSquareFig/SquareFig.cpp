#include "SquareFig.h"
#include "math.h"

SquareFig::SquareFig() {
	a1 = 0;
	a2 = 0;
	b2 = 0;
	b2 = 0;
}


/// Задать координаты
void SquareFig::set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
	float s1, s2, s3, s4, d1, d2;
	s1 = sqrt((pow((x2 - x1), 2)) + pow((y2 - y1), 2));
	s2 = sqrt((pow((x3 - x2), 2)) + pow((y3 - y2), 2));
	s3 = sqrt((pow((x4 - x3), 2)) + pow((y4 - y3), 2));
	s4 = sqrt((pow((x1 - x4), 2)) + pow((y1 - y4), 2));
	d1 = sqrt((pow((x3 - x1), 2)) + pow((y3 - y1), 2));
	d2 = sqrt((pow((x4 - x2), 2)) + pow((y4 - y2), 2));
	if ((s1 != s2 != s3 != s4) && (d1 != d2)) throw std::invalid_argument("Error: sides are set incorrectly, square does not exist");
	/*if ((sqrt(pow((x2 - x1),2)) + pow((y2 - y1),2) != sqrt(pow((x3 - x2), 2)) + pow((y3 - y2), 2) !=
		sqrt(pow((x4 - x3), 2)) + pow((y4 - y3), 2) != sqrt(pow((x1 - x4), 2)) + pow((y1 - y4), 2)) && (
			sqrt(pow((x3 - x1), 2)) + pow((y3 - y1), 2) != sqrt(pow((x4 - x2), 2)) + pow((y4 - y3), 2)) ) throw
		std::invalid_argument("Error: sides are set incorrectly, square does not exist");*/
	else {
		a1 = x1;
		a2 = y1;
		b1 = x2;
		b2 = y2;
	}
}

/// Нахождение длины одной стороны
float SquareFig::side_lengths() {
	return sqrt((pow((b1 - a1), 2)) + pow((b2 - a1), 2));
}

/// Нахождение периметра
float SquareFig::perimeter() {
	return sqrt((pow((b1 - a1), 2)) + pow((b2 - a1), 2)) * 4;
}

/// Нахождение площади
float SquareFig::area() {
	return pow(sqrt((pow((b1 - a1), 2)) + pow((b2 - a1), 2)), 2);
}

///// Перевод в строку
//std::string SquareFig::to_string() {
//	return "lengths = " + std::to_string(sqrt((pow((b1 - a1), 2)) + pow((b2 - a1), 2))) + "; P = " + std::to_string(P) + " cm ; S = " + std::to_string(S) + " cm2";
//}

// d=sqrt(sqr(x2-x1)+sqr(y2-y1))