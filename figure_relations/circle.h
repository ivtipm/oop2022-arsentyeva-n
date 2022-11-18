// @author: Natalya Arsentyeva
#pragma once
#include "figures.h"

class Circle : public Figures
{
protected:
	unsigned R, l;

public:
	Circle();
	float perimeter();
	float area();
};
