#include <iostream>

int returnInput() 
{
	int number = 0;
	std::cin >> number;
	return number;
}

int multiplyStuff(int x, int y, int z) 
{
	return x * y * z;
}

int addStuff(int x, int y, int z)
{
	return x + y + z;
}


int main() 
{
	int x = returnInput();
	int y = returnInput();
	int z = returnInput();

	int multiplicationResult = multiplyStuff(x, y, z);
	std::cout << multiplicationResult << std::endl;

	int additionResult = addStuff(x, y, z);
	std::cout << additionResult << std::endl;

	while (1);

	return 0;
}
