#ifndef VALUE_H
#define VALUE_H

#include <string>
#include "SimpleClass.h"

class Value
{
public:
	void Manipulate(int number);
	void Manipulate(std::string str);
	void Manipulate(SimpleClass simClass);
	void DoNotManipulate(const SimpleClass simClass);

	std::string GetName() { return mName; }

private:
	std::string mName;
};

#endif