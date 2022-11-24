// @author: Natalya Arsentyeva
#pragma once
#include "figures.h"
#define _USE_MATH_DEFINES // Вкл. мат. константы


// Окружность
class Circle : public Figures
{
protected:
	float R;

public:
	/// Конструктор по умолчанию
	Circle();
	Circle(float R1);

	/// Задать радиус
	void set_R(float R1);

	/// Вывести радиус
	float set_R() const;

	/// Найти диаметр
	float diametr() const;

	/// Найти периметр
	float perimeter() const;

	/// Найти площадь
	float area() const;

	/// Преобразование в строку
	std::string to_string() const;
};
