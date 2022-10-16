#include "SquareFig.h"
#include "math.h"

SquareFig::SquareFig() {
	P = 0;
	S = 0;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len_side = 0;
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
		a = x1;
		b = y1;
		c = x2;
		d = y2;
	}
}

/// Нахождение длины одной стороны
float SquareFig::side_lengths() {
	len_side = sqrt((pow((c - a), 2)) + pow((d - a), 2));
	return len_side;
}

/// Нахождение периметра
float SquareFig::perimeter() {
	P = len_side * 4;
	return P;
}

/// Нахождение площади
float SquareFig::area() {
	S = pow(len_side, 2);
	return S;
}

/// 
std::string SquareFig::to_string() {
	return "lengths = " + std::to_string(len_side) + "; P = " + std::to_string(P) + " cm ; S = " + std::to_string(S) + " cm2";
}

// d=sqrt(sqr(x2-x1)+sqr(y2-y1))