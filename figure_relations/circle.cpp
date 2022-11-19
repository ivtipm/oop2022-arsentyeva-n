// @author: Natalya Arsentyeva
#include "circle.h"
#define M_PI 3.14159265358979323846 


/// ����������� �� ���������
Circle::Circle() {
	R = 0;
};

Circle::Circle(float R1) {
	set_R(R1);
};


/// ������ ������
void Circle::set_R(float R1) { 
	if (R1 <= 0) { throw std::invalid_argument("Error: R are set incorrectly, circle does not exist"); }
	R = R1; 
};

/// ����� �������
float Circle::diametr() const { return 2 * R; };

/// ����� ��������
float Circle::perimeter() const { return 2 * R * M_PI; };

/// ����� �������
float Circle::area() const { return R * R * M_PI; };
