// @author: Natalya Arsentyeva
#pragma once
#include <math.h>
#include <iostream>
#include <string>


/// Абстрактная фигура
class Figures
{
	public:
		/// Конструктор по умолчанию
		Figures() { };

		/// Нахождение периметра
		float virtual perimeter() const = 0; // абстрактные методы

		/// Нахождение площади
		float virtual area() const = 0; 

		/// Преобразование в строку
		std::string virtual to_string() const = 0;
};

