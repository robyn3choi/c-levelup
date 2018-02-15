#ifndef SIMPLE_CLASS_H
#define SIMPLE_CLASS_H

class SimpleClass
{
public:
	SimpleClass()
		: Data1(1)
		, Data2(2)
		, Data3(3)
		, Data4(4)
	{
		// Empty
	}

	~SimpleClass()
	{
		// Empty
	}

	int Data1;
	int Data2;
	int Data3;
	int Data4;
};

#endif
