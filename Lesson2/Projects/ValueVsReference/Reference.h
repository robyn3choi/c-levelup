#ifndef REFERENCE_H
#define REFERENCE_H

#include <string>
#include "SimpleClass.h"

class Reference
{
public:
	void Manipulate(int &number);
	void Manipulate(std::string& str);
	void Manipulate(SimpleClass& simClass);
	void DoNotManipulate(const SimpleClass& simClass);

	std::string& GetName() { return mName; } // Return string by reference
	const std::string& GetNameConst() { return mName; } // Return string by const reference

private:
	std::string mName;
};

#endif