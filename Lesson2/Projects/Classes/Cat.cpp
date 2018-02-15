#include "Cat.h"

Cat::Cat()
	: mNumberOfLegs(4) // Initializer list.
	, mHappy(true)
{
	// Always prefer an Initializer list!
	// Uses fewer machine instructions.
	// mNumberOfLegs = 4;
	// mHappy = true;

	mConsole.Print("A Cat has been born!! Yay!");
}

Cat::Cat(int numberOfLegs, bool happy)
	: mNumberOfLegs(numberOfLegs)
	, mHappy(happy)
{
	mConsole.Print("A Cat has been born!! Yay!");
}

Cat::~Cat()
{
	mConsole.Print("A Cat has been lost... :(!");
}

void Cat::Speak()
{
	mConsole.Print("Hello I am a Cat!");
}

void Cat::Jump()
{
	mConsole.Print("Jumping over the moon!");
}

void Cat::Chill()
{
	mConsole.Print("Chilling like a villain!");
}

int Cat::GetNumberOfLegs()
{
	return mNumberOfLegs;
}

bool Cat::GetHappy()
{
	return mHappy;
}

void Cat::SetNumberOfLegs(int numberOfLegs)
{
	if (numberOfLegs > 1)
	{
		mNumberOfLegs = numberOfLegs;
	}
}

void Cat::SetHappy(bool happy)
{
	mHappy = happy;
}