#include <string>
#include <iostream>
#include "MyClass.h"

int* ReturnInt(int& ref);
float* ReturnFloat(float& ref);
bool* ReturnBool(bool& ref);
char* ReturnChar(char& ref);
std::string* ReturnString(std::string& ref);
float* Dragon(float& dragon);
void ChangeMyClass(MyClass* myClass);

int main()
{
	int a = 5;
	std::cout << *(ReturnInt(a)) << std::endl;

	float b = 1.2;
	std::cout << *(ReturnFloat(b)) << std::endl;

	bool c = true;
	std::cout << *(ReturnBool(c)) << std::endl;

	char d = 'd';
	std::cout << *(ReturnChar(d)) << std::endl;

	std::string e = "string";
	std::cout << *(ReturnString(e)) << std::endl;

	Dragon(b);

	MyClass myClass;
	std::cout << myClass.myInt << std::endl;
	ChangeMyClass(&myClass);
	std::cout << myClass.myInt << std::endl;

	while (1);
	return 0;
}

int * ReturnInt(int & ref)
{
	return &ref;
}

float * ReturnFloat(float & ref)
{
	return &ref;
}

bool * ReturnBool(bool & ref)
{
	return &ref;
}

char * ReturnChar(char & ref)
{
	return &ref;
}

std::string * ReturnString(std::string & ref)
{
	return &ref;
}

float * Dragon(float & dragon)
{
	float* pointer = &dragon;
	if (floor(*pointer) == *pointer)
	{
		std::cout << "dragon is whole" << std::endl;
	}
	else
	{
		std::cout << "dragon is not whole" << std::endl;
	}
	return pointer;
}

void ChangeMyClass(MyClass * myClass)
{
	myClass->myInt = 2;
}
