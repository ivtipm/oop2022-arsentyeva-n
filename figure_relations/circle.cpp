// @author: Natalya Arsentyeva
#include "circle.h"
#define M_PI 3.14159265358979323846 

Circle::Circle() {
	R = 0;
	l = 0;
};

float Circle::perimeter() { return 2 * R * M_PI; };
float Circle::area() { return R * R * M_PI; };