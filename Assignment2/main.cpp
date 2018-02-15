#include <iostream>

void PrintForLoop()
{
	for (int i = 0; i <= 50; i++)
	{
		std::cout << i << std::endl;
	}
}

void PrintDoWhileLoop()
{
	bool shouldLoop = false;
	int num = 0;
	do
	{
		std::cout << num << std::endl;
		std::cout << "Keep Looping? (1/0)" << std::endl;
		std::cin >> shouldLoop;

		num++;
	} 
	while (shouldLoop);
}

void PrintWhileLoop()
{
	bool shouldLoop = true;
	int num = 0;

	while (shouldLoop)
	{
		std::cout << "Print number? (1/0)" << std::endl;
		std::cin >> shouldLoop;

		std::cout << num << std::endl;
		num++;
	}
}

int main()
{
	PrintForLoop();
	PrintDoWhileLoop();
	PrintWhileLoop();

	int num = 504530;
	std::cout << "Size of Int: " << sizeof(num) << std::endl;

	std::string helloString = "Hello";
	std::cout << "Size of String: " << sizeof(helloString) << std::endl;

	while (1);

	return 0;
}