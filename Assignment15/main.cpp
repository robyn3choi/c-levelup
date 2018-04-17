#include "Slotter.h"
#include "Exceptions.h"
#include <iostream>
#include <string>


int main()
{
	Slotter slotter;
	std::string name;
	int legs;
	float length;

	std::cin >> name;
	try 
	{
		slotter.SetName(name);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}

	std::cin >> legs;
	try
	{
		slotter.SetLegs(legs);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}

	std::cin >> length;
	try
	{
		slotter.SetLength(length);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}




	while (1);
	return 0;
}