// @author: Natalya Arsentyeva
#pragma once
#include <string>
#include <stdexcept>

using namespace std;


/// Фигура квадрат
class SquareFig
{
private:
	// Координаты точки A(ax,ay), аналогично B,C,D
	float ax, ay, bx, by, cx, cy, dx, dy;


public:
	// Конструктор (инициализирует поля)
	SquareFig();
	SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);


	/// Задать координаты
	void set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// Нахождение длины одной стороны
	float side_lengths() const;

	/// Нахождение периметра
	float perimeter() const;

	/// Нахождение площади
	float area() const;

	/// Перевод в строку
	std::string to_string() const;
};
