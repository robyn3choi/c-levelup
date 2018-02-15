#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
	: mNumberOfTires(4)
{
	mConsole.Print("Vehicle - Default Constructor");
}

Vehicle::Vehicle(int numberOfTires)
	: mNumberOfTires(numberOfTires)
{
	mConsole.Print("Vehicle - Defined Constructor");
}

Vehicle::Vehicle(int numberOfTires, int numberOfLegsForCat)
	: mNumberOfTires(numberOfTires)
	, mCat(numberOfLegsForCat, true)
{
	mConsole.Print("Vehicle - Defined Constructor");
}

Vehicle::~Vehicle()
{
	mConsole.Print("Vehicle - Destructor");
}