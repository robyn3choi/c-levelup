#include "Platyporse.h"
#include <iostream>


Platyporse::Platyporse(float billLength) :
	mBillLength(billLength)
{
}


Platyporse::~Platyporse()
{
}

bool Platyporse::operator<(const Platyporse & rhs) const
{
	if (mBillLength < rhs.GetBillLength())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Platyporse::operator>(const Platyporse & rhs) const
{
	if (mBillLength > rhs.GetBillLength())
	{
		return true;
	}
	else
	{
		return false;
	}
}

float Platyporse::GetBillLength() const
{
	return mBillLength;
}

void Platyporse::Print() const
{
	std::cout << "This platyporse has a bill length of " << mBillLength << std::endl;
}
