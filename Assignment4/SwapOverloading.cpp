#include "SwapOverloading.h"
#include <iostream>


SwapOverloading::SwapOverloading()
{
}


SwapOverloading::~SwapOverloading()
{
}

void SwapOverloading::Run()
{
	int int1 = 1;
	int int2 = 2;
	Swap(int1, int2);

	bool bool1 = true;
	bool bool2 = false;
	Swap(bool1, bool2);

	std::string string1 = "hi";
	std::string string2 = "bye";
	Swap(string1, string2);
}

void SwapOverloading::Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
	std::cout << x << " " << y << std::endl;
}

void SwapOverloading::Swap(bool& x, bool& y)
{
	bool temp = x;
	x = y;
	y = temp;
	std::cout << x << " " << y << std::endl;
}

void SwapOverloading::Swap(std::string& x, std::string& y)
{
	std::string temp = x;
	x = y;
	y = temp;
	std::cout << x << " " << y << std::endl;
}
