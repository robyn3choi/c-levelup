#include "BitArray64.h"
#include <iostream>

int main()
{
	BitArray64 bArray;
	std::cout << bArray.Get() << std::endl;
	std::cout << bArray.Get() << std::endl;
	std::cout << bArray.Get() << std::endl;

	bArray.Return(1);
	std::cout << bArray.Get() << std::endl;

	std::cout << bArray.Value(5) << std::endl;
	bArray.Set(5, true);
	std::cout << bArray.Value(5) << std::endl;
	bArray.Set(5, false);
	std::cout << bArray.Value(5) << std::endl;

	while (1);
	return 0;
}