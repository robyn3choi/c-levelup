#include "Slotter.h"
#include "Exceptions.h"


Slotter::Slotter()
{
}


Slotter::~Slotter()
{
}

void Slotter::SetName(std::string name)
{
	for (int i = 0; i < 10; i++)
	{
		if (name[0] == mVowels[i])
		{
			throw VowelException();
		}
	}
}

void Slotter::SetLegs(int legs)
{
	if (legs % 2 == 0)
	{
		throw EvenLegsException();
	}
}

void Slotter::SetLength(float length)
{
	if (length < 00.1f || length > 0.1f)
	{
		throw LengthException();
	}
}
