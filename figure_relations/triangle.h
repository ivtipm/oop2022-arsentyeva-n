// @author: Natalya Arsentyeva
#pragma once
#include "figures.h"

class Triangle: public Figures
{
	protected:
		unsigned a,b,c;

	public:
		Triangle();
		float perimeter();
		float area();
};


