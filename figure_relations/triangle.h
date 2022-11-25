// @author: Natalya Arsentyeva
#pragma once
#include "figures.h"

/// Фигура треугольник
class Triangle: public Figures
{
	protected:
	float a,b,c;

	public:
		/// Конструктор по умолчанию
		Triangle();
		Triangle(float a1, float b1, float c1);

		/// Задать стороны
		void set_ABC(float a1, float b1, float c1);

		/// Вывести стороны
		float get_a() const;
		float get_b() const;
		float get_c() const;

		/// Найти периметр
		float perimeter() const;

		/// Найти площадь
		float area() const;

		/// Найти высоту треугольника
		float hightA() const;

		float hightB() const;

		float hightC() const;
		
		/// Преобразование в строку
		std::string to_string() const;
};


