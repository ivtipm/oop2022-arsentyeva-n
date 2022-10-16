#pragma once
#include <string>
#include <stdexcept>

//������ �������
class SquareFig
{
private:
	float P, S;			// �������� � �������
	float len_side;		// ����� �������
	float a, b, c, d;   // ���������� 2-� ����� ��� ���������� �������
	
	
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

