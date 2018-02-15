#include <iostream>

// The Stack

// Stack Functionality:
// F - First
// I - In
// L - Last 
// O - Out

// PUSH things onto the stack
// POP things off

// Every function that gets pushed onto the stack = a new STACK FRAME
	// EVERY FUNCTION ADDS A NEW STACK FRAME!


void PushToStack(int count);

int main()
{
	PushToStack(0);
	return 0;
}

void PushToStack(int count)
{
	std::cout << count << std::endl;
	PushToStack(count + 1);
}