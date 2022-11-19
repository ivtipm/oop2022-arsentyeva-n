// @author: Natalya Arsentyeva
#pragma once
#include "figures.h"

/// ������ �����������
class Triangle: public Figures
{
	protected:
		unsigned a,b,c;

	public:
		/// ����������� �� ���������
		Triangle();
		Triangle(float a1, float b1, float c1);

		/// ������ �������
		void set_ABC(float a1, float b1, float c1);

		/// ����� ��������
		float perimeter();

		/// ����� �������
		float area();

		/// ����� ������ ������������
		float hight();
		
		/// �������������� � ������
		std::string to_string();
};


