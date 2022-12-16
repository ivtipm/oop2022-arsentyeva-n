/// @author: Natalya Arsentyeva
#pragma once
#include <string>
#include <stdexcept>
#include <iostream>
#include "math.h"
#include <fstream>
#include <sstream>


using namespace std;


/// Фигура квадрат
class SquareFig
{
private:
	// Координаты точки A(ax,ay), аналогично B, C, D
	float ax, ay, bx, by, cx, cy, dx, dy;

public:
	// Конструктор (инициализирует поля)
	SquareFig();
	SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	///Вывести координаты

    float get_Ax() const;
    float get_Ay() const;
    float get_Bx() const;
    float get_By() const;
    float get_Cx() const;
    float get_Cy() const;
    float get_Dx() const;
    float get_Dy() const;

	std::string to_string_coord() const;

	/// Задать координаты
	void set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// Нахождение длины стороны
	float side_lengths() const;

	/// Нахождение периметра
	float perimeter() const;

	/// Нахождение площади
	float area() const;

	/// Перевод значений в строку
	std::string to_string() const;
};


