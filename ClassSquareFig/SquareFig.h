#pragma once
#include <string>
#include <stdexcept>

//������ �������
class SquareFig
{
private:
	float a1, a2, b1, b2;   // ���������� 2-� ����� ��� ���������� �������
	
	
public:
	// ����������� (�������������� ����)
	SquareFig();


	/// ������ ����������
	void set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// ���������� ����� ����� �������
	float side_lengths();

	/// ���������� ���������
	float perimeter();

	/// ���������� �������
	float area();

	/// ������� � ������
	std::string to_string();
};

