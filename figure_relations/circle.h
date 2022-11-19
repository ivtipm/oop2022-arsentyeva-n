// @author: Natalya Arsentyeva
#pragma once
#include "figures.h"
#define _USE_MATH_DEFINES // Вкл. мат. константы

class Circle : public Figures
{
protected:
	unsigned R;

public:
	/// Конструктор по умолчанию
	Circle();
	Circle(float R1);

	/// Задать радиус
	void set_R(float R1);

	/// Найти диаметр
	float diametr();

	/// Найти периметр
	float perimeter();

	/// Найти площадь
	float area();
};
