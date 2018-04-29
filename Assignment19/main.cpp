#include "MySharedPtr.h"
#include <iostream>

int main()
{
	int* two = new int(2);

	MySharedPtr<int> copyConstructedRaw(two);
	std::cout << *copyConstructedRaw << std::endl;

	{
		MySharedPtr<int> moveConstructed(new int(1));
		std::cout << *(moveConstructed.Get()) << std::endl;

		MySharedPtr<int> assigned = moveConstructed;
		std::cout << *assigned << std::endl;

		{
			MySharedPtr<int> copyContructed(assigned);
		}
	}


	while (1);
	return 0;
}