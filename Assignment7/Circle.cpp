#include <iostream>

#include "Circle.h"

Circle::Circle(string& name, float radius)
	: TwoDimensional(name)
{
	SetRadius(radius);
}

Circle::~Circle()
{
	// Empty
}

void Circle::SetRadius(float radius)
{
	mRadius = BelowZeroCheck(radius);
}

void Circle::Print() const
{
	std::cout << "Perimeter: " << GetPerimeter() << std::endl;
	std::cout << "Area: " << GetArea() << std::endl;
}

float Circle::GetArea() const
{
	return mPie * mRadius * mRadius; 
}

float Circle::GetPerimeter() const
{
	return 2.0f * mPie * mRadius;
}
