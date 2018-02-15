#include "Console.h"
#include <iostream>

Console::Console()
{
	// Empty
	std::cout << "Created Console" << std::endl;
}

Console::~Console()
{
	// Empty
}

void Console::NewLine()
{
	std::cout << std::endl;
}

void Console::Print(std::string string)
{
	std::cout << string << std::endl;
}

std::string Console::GetInput()
{
	std::string input;
	std::getline(std::cin, input);
	return input;
}