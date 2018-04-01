#include <iostream>

#include "FloatArray.h"

int main()
{
	FloatArray floatArray;

	// Original Tests --- Start
	floatArray.Add(1.0f);
	floatArray.Add(2.0f);
	floatArray.Add(4.0f);
	floatArray.Add(8.0f);

	floatArray.Remove(0);
	floatArray.Remove(0);

	floatArray.Add(2.0f);
	floatArray.Add(1.0f);
	// Original Tests --- End

	const float* floatRawArray = floatArray.GetRawArray();
	const int numberOfFloats = floatArray.GetNumberOfFloats();

	for (int i = 0; i < numberOfFloats; ++i)
	{
		std::cout << floatRawArray[i] << std::endl;
	}

	while (1);
	return 0;
}

// If you remove any custom tests (keep the original ones), the end output should be:
// 4
// 8
// 2
// 1