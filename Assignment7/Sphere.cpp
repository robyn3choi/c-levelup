#include <iostream>

#include "Sphere.h"

Sphere::Sphere(std::string& name, float radius)
	: ThreeDimensional(name)
	, mRadius(radius)
{
	SetRadius(radius);
}

Sphere::~Sphere()
{
	// Empty
}

void Sphere::SetRadius(float radius)
{
	mRadius = BelowZeroCheck(radius);
}

float Sphere::GetVolume() const
{
	return 4.0f * mPie * mRadius * mRadius * mRadius / 3.0f;
}

float Sphere::GetSurfaceArea() const
{
	return 4.0f * mPie * mRadius * mRadius;
}

void Sphere::Print() const
{
	std::cout << "Volume: " << GetVolume() << std::endl;
	std::cout << "Surface Area: " << GetSurfaceArea() << std::endl;
}