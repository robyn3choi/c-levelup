#include <iostream>
#include "Reference.h"
#include "Value.h"

void ManipulateInts();
void ManipulateStrings();
void ManipulateSimpleClass();

int main()
{
	ManipulateInts();
	ManipulateStrings();
	ManipulateSimpleClass();


	Value value;
	Reference reference;

	std::string valueName = value.GetName(); // Funtion returns name by value (copy)

	// Function returns name by reference (copy of the memory address).
	std::string& referenceName = reference.GetName();	
	// Function returns name by const reference (copy of the memory address, but memory is locked).
	const std::string& constReferenceName = reference.GetNameConst();	

	valueName = "BobRoss";
	referenceName = "BobRoss";


	while (1);
	return 0;
}

void ManipulateInts()
{
	Value value;
	Reference reference;

	int valueNumber = 5;
	int referenceNumber = 5;

	value.Manipulate(valueNumber);
	reference.Manipulate(referenceNumber);

	std::cout << "Value Number: " << valueNumber << std::endl;
	std::cout << "Reference Number: " << referenceNumber << std::endl;
}

void ManipulateStrings()
{
	Value value;
	Reference reference;

	std::string valueStr = "Goodbye";
	std::string referenceStr = "Goodbye";

	value.Manipulate(valueStr);
	reference.Manipulate(referenceStr);

	std::cout << "Value Str: " << valueStr << std::endl;
	std::cout << "Reference Str: " << referenceStr << std::endl;
}

void ManipulateSimpleClass()
{
	Value value;
	Reference reference;

	SimpleClass valueClass;
	SimpleClass referenceClass;

	value.Manipulate(valueClass);
	reference.Manipulate(referenceClass);
}