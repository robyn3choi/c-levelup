#include <iostream>

#include "Shape.h"

Shape::Shape(std::string& name)
{
	mName = name;
}

Shape::~Shape()
{
}

float Shape::BelowZeroCheck(float number) const
{
	if (number < 0.0f)
	{
		cout << "ERROR - " << number << " Invalid. " << endl;
		return 0.0f;
	}
	return number;
}
