// @author: Natalya Arsentyeva
#pragma once
#include <math.h>
#include <iostream>
#include <string>


class Figures
{
	public:
		/// Конструктор по умолчанию
		Figures() { };

		/// Нахождение периметра
		float virtual perimeter() = 0; // абстрактный метод

		/// Нахождение площади
		float virtual area() = 0; 
};

