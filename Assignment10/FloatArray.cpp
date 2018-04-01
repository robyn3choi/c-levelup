#include "FloatArray.h"
#include <iostream>

FloatArray::FloatArray()
{
	// Empty
}

FloatArray::~FloatArray()
{
	// Empty
}

void FloatArray::Add(float value)
{
	float* temp = mpFloats;
	mpFloats = new float[mNumberOfFloats + 1];
	for (int i = 0; i < mNumberOfFloats; i++)
	{
		mpFloats[i] = temp[i];
	}
	mpFloats[mNumberOfFloats] = value;

	delete[] temp;
	temp = nullptr;

	++mNumberOfFloats;
}

void FloatArray::Remove(int index)
{
	if (index < 0 || index > mNumberOfFloats - 1)
	{
		std::cout << "invalid input" << std::endl;
		return;
	}

	float* temp = mpFloats;
	mpFloats = new float[mNumberOfFloats - 1];
	for (int i = 0; i < index; i++)
	{
		mpFloats[i] = temp[i];
	}
	for (int i = index + 1; i < mNumberOfFloats; i++)
	{
		mpFloats[i-1] = temp[i];
	}

	delete[] temp;
	temp = nullptr;

	--mNumberOfFloats;
}