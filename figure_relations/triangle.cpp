// @author: Natalya Arsentyeva
#include "triangle.h"


Triangle::Triangle() { 
	a = 0; 
	b = 0; 
	c = 0; };

float Triangle::perimeter() { return a + b + c; };
float Triangle::area() { 
	float p;
	p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c)); };
