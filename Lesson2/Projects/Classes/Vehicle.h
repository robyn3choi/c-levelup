#ifndef VEHICLE_H
#define VEHICLE_H

#include "Cat.h"
#include "Console.h"

class Vehicle
{
public:
	Vehicle();	// Default constructor
	Vehicle(int numberOfTires);							// Defined Constructor
	Vehicle(int numberOfTires, int numberOfLegsForCat); // Defined Constructor
	~Vehicle();

private:
	int mNumberOfTires;
	Console mConsole;
	Cat mCat;
};

#endif