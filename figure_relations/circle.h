// @author: Natalya Arsentyeva
#pragma once
#include "figures.h"
#define _USE_MATH_DEFINES // ���. ���. ���������

class Circle : public Figures
{
protected:
	float R;

public:
	/// ����������� �� ���������
	Circle();
	Circle(float R1);

	/// ������ ������
	void set_R(float R1);

	/// ����� �������
	float diametr() const;

	/// ����� ��������
	float perimeter() const;

	/// ����� �������
	float area() const;
};
