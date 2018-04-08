#include "Shorse.h"
#include <iostream>


Shorse::Shorse(int numTeeth) :
	mNumTeeth(numTeeth)
{
}


Shorse::~Shorse()
{
}

bool Shorse::operator<(const Shorse & rhs) const
{
	if (mNumTeeth < rhs.GetNumTeeth())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Shorse::operator>(const Shorse & rhs) const
{
	if (mNumTeeth > rhs.GetNumTeeth())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Shorse::GetNumTeeth() const
{
	return mNumTeeth;
}

void Shorse::Print() const
{
	std::cout << "This Shorse has " << mNumTeeth << " teeth" << std::endl;
}
