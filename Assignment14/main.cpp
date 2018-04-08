#include <map>
#include <iostream>
#include <stdexcept>

float Add(float num1, float num2);
float Subtract(float num1, float num2);
float Multiply(float num1, float num2);
float Divide(float num1, float num2);

int main()
{
	using FuncPtr = float(*)(float, float);

	std::map<char, FuncPtr> map;
	map.insert(std::pair<char, FuncPtr>('+',Add));
	map.insert(std::pair<char, FuncPtr>('-', Subtract));
	map.insert(std::pair<char, FuncPtr>('*', Multiply));
	map.insert(std::pair<char, FuncPtr>('/', Divide));

	float num1;
	float num2;
	char op;

	std::cout << "Enter num1: " << std::endl;
	std::cin >> num1;
	std::cout << "Enter num2: " << std::endl;
	std::cin >> num2;
	std::cout << "Enter operator: " << std::endl;
	std::cin >> op;

	FuncPtr func = nullptr;
	float result;

	try 
	{
		func = map.at(op);
	} 
	catch (std::out_of_range e)
	{
		throw std::invalid_argument("invalid operator");
	}

	try
	{
		result = func(num1, num2);
		std::cout << result << std::endl;
	}
	catch (std::invalid_argument e)
	{
		std::cout << e.what() << std::endl;
	}

	while (1);
	return 0;
}

float Add(float num1, float num2)
{
	return num1 + num2;
}

float Subtract(float num1, float num2)
{
	return num1 - num2;
}

float Multiply(float num1, float num2)
{
	return num1 * num2;
}

float Divide(float num1, float num2)
{
	if (num2 == 0)
	{
		throw std::invalid_argument("Cannot divide by zero!");
	}
	return num1 / num2;
}
