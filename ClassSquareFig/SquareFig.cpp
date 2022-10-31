// @author: Natalya Arsentyeva
#include "SquareFig.h"
#include "math.h"
#define _USE_MATH_DEFINES // âêë. ìàòåìàòè÷åñêèå êîíñòàíòû


/// Êîíñòðóêòîð ïî óìîë÷àíèþ
SquareFig::SquareFig() {
	ax = 0;
	ay = 0;
	bx = 0;
	by = 0;
	cx = 0;
	cy = 0;
	dx = 0;
	dy = 0;
}


SquareFig::SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
	set_coordinates(x1, y1, x2, y2, x3, y3, x4, y4);
}


/// Çàäàòü êîîðäèíàòû
void SquareFig::set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
	float s1, s2, s3, s4, d1, d2;
	// Ñòîðîíû
	s1 = pow((x2 - x1), 2) + pow((y2 - y1), 2);
	s2 = pow((x3 - x2), 2) + pow((y3 - y2), 2);
	s3 = pow((x4 - x3), 2) + pow((y4 - y3), 2);
	s4 = pow((x1 - x4), 2) + pow((y1 - y4), 2);
	// Äèàãîíàëè
	d1 = pow((x3 - x1), 2) + pow((y3 - y1), 2);
	d2 = pow((x4 - x2), 2) + pow((y4 - y2), 2);
	// Ñðàâíåíèå äëèí ñòîðîí è äèàãîíàëåé
	if ((fabs(s1 - s2) > FLT_EPSILON) || (fabs(s1 - s3) > FLT_EPSILON) || (fabs(s1 - s4) > FLT_EPSILON) || (fabs(d1 - d2) > FLT_EPSILON)) throw std::invalid_argument("Error: sides are set incorrectly, square does not exist");
	ax = x1;
	ay = y1;
	bx = x2;
	by = y2;
	cx = x3;
	cy = y3;
	dx = x4;
	dy = y4;
}

/// Íàõîæäåíèå äëèíû îäíîé ñòîðîíû
float SquareFig::side_lengths() const {
	return sqrt((pow((bx - ax), 2)) + pow((by - ay), 2));
}

/// Íàõîæäåíèå ïåðèìåòðà
float SquareFig::perimeter() const {
	return sqrt((pow((bx - ax), 2)) + pow((by - ay), 2)) * 4;
}

/// Íàõîæäåíèå ïëîùàäè
float SquareFig::area() const {
	return pow(sqrt((pow((bx - ax), 2)) + pow((by - ay), 2)), 2);
}

/// Ïåðåâîä â ñòðîêó
std::string SquareFig::to_string() const {
	return "lengths side = " + std::to_string(side_lengths()) + " cm; P = " + std::to_string(perimeter()) + " cm; S = " + std::to_string(area()) + " cm2";
}

// d=sqrt(sqr(x2-x1)+sqr(y2-y1))
