#include "Reference.h"

void Reference::Manipulate(int &number)
{
	++number;
}

void Reference::Manipulate(std::string& str)
{
	str += "Hello";
}

void Reference::Manipulate(SimpleClass& simClass)
{
	simClass.Data1 += 1;
	simClass.Data2 += 1;
	simClass.Data3 += 1;
	simClass.Data4 += 1;
}

void Reference::DoNotManipulate(const SimpleClass& simClass)
{
	// Cannot change const memory
	//simClass.Data1 += 1;
	//simClass.Data2 += 1;

	// Can still access it
	int a = simClass.Data1;
}