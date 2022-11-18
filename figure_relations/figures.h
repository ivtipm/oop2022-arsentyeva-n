// @author: Natalya Arsentyeva
#include <math.h>
#pragma once

class Figures
{
	public:
		Figures() { };
		/// метод нахождения периметра
		float virtual perimeter() = 0; // абстрактный метод
		/// метод нахождения площади
		float virtual area() = 0; // абстрактный метод
};

