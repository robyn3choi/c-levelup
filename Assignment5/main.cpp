/*
1. Plain enum names are in the same scope as the enum itself, while scoped enum names are local to the enum.
Scoped enums are better because there is type safety. Plain enums can be easily redefined elsewhere in the code, leading to confusion.

2. "break" ends the containing loop. "continue" ends only that iteration of the loop.

Note: I didn't write the 3rd function of this assignment because it's BENEATH ME     🙂
*/

#include <iostream>
#include <cmath>

void MultiPrint(int printAmount, char printCharacter);
float Distance(float x1, float y1, float x2, float y2);

int main()
{
	MultiPrint(3, 'b');
	std::cout << Distance(0, 0, 1, 1);

	while (1);
	return 0;
}

void MultiPrint(int printAmount, char printCharacter)
{
	for (int i = 1; i <= printAmount; i++)
	{
		std::cout << printCharacter << std::endl;
	}
}

float Distance(float x1, float y1, float x2, float y2)
{
	float term1 = std::pow(x2 - x1, 2);
	float term2 = std::pow(y2 - y1, 2);
	return std::sqrt(term1 + term2);
}