#pragma once
#include <string>
#include <stdexcept>

//Фигура квадрат
class SquareFig
{
private:
	float a1, a2, b1, b2, c1, c2, d1, d2;   // Координаты 2-х точек для нахождения стороны


public:
	// конструктор (инициализирует поля)
	SquareFig();
	SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// Задать координаты
	void set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// Нахождение длины одной стороны
	float side_lengths();

	/// Нахождение периметра
	float perimeter();

	/// Нахождение площади
	float area();

	/// Перевод в строку
	std::string to_string();
};

