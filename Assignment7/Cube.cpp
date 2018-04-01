#include <iostream>

#include "Cube.h"

Cube::Cube(std::string& name, float width, float height, float depth)
	: ThreeDimensional(name)
	, mDepth(0.0f)
{
	SetWidth(width);
	SetHeight(height);
	SetDepth(depth);
}

Cube::~Cube()
{
	// Empty
}

void Cube::SetWidth(float width)
{
	mWidth = BelowZeroCheck(width);
}

void Cube::SetHeight(float height)
{
	mHeight = BelowZeroCheck(height);
}

void Cube::SetDepth(float depth)
{
	mDepth = BelowZeroCheck(depth);
}

float Cube::GetWidth() const
{
	return mWidth;
}

float Cube::GetHeight() const
{
	return mHeight;
}

float Cube::GetDepth() const
{
	return mDepth;
}

float Cube::GetVolume() const
{
	return mWidth * mHeight * mDepth;
}

float Cube::GetSurfaceArea() const
{
	return (2.0f * mWidth * mHeight) + (2.0f * mHeight * mDepth) + (2.0f * mWidth * mDepth);
}

void Cube::Print() const
{
	std::cout << "Volume: " << GetVolume() << std::endl;
	std::cout << "Surface Area: " << GetSurfaceArea() << std::endl;
}
