#include "Value.h"

void Value::Manipulate(int number)
{
	++number;
}

void Value::Manipulate(std::string str)
{
	str += "Hello";
}

void Value::Manipulate(SimpleClass simClass)
{
	simClass.Data1 += 1;
	simClass.Data2 += 1;
	simClass.Data3 += 1;
	simClass.Data4 += 1;
}

void Value::DoNotManipulate(const SimpleClass simClass)
{
	// There is no point in "consting" when passing by VALUE.
}