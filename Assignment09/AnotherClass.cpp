#include "AnotherClass.h"



AnotherClass::AnotherClass()
{
	mCustomClass = new CustomClass();
}


AnotherClass::~AnotherClass()
{
	delete mCustomClass;
	mCustomClass = nullptr;
}
