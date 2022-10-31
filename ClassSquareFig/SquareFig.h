// @author: Natalya Arsentyeva
#pragma once
#include <string>
#include <stdexcept>

using namespace std;


/// ������ �������
class SquareFig
{
private:
	// ���������� ����� A(ax,ay), ���������� B,C,D
	float ax, ay, bx, by, cx, cy, dx, dy;


public:
	// ����������� (�������������� ����)
	SquareFig();
	SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);


	/// ������ ����������
	void set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// ���������� ����� ����� �������
	float side_lengths() const;

	/// ���������� ���������
	float perimeter() const;

	/// ���������� �������
	float area() const;

	/// ������� � ������
	std::string to_string() const;
};
