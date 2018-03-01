/*
1. 4 bytes get allocated on the stack, storing the value 10.

2. passing by reference passes the actual object, passing by value passes a copy of the object

3. 
*/

#include <string>
#include "SwapOverloading.h"

int main()
{
	SwapOverloading swapOverloading;
	swapOverloading.Run();
	while (1);
	return 0;
}
