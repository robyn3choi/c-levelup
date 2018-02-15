// If Not Defined
#ifndef CAT_H
#define CAT_H

#include "Console.h"

class Cat
{
public:
	Cat();	// Default Constructor
	Cat(int numberOfLegs, bool happy); // Defined Constructor
	~Cat();	// Destructor


	// These functions, which are now inside a class
	// are referred to as METHODS.
	void Speak();
	void Jump();
	void Chill();

	// Getters - Return the value of a member variable.
	int GetNumberOfLegs();
	bool GetHappy();

	// Setters - Set the value of a member variable.
	void SetNumberOfLegs(int numberOfLegs);
	void SetHappy(bool happy);

private:
	// Variables inside a class are referred to as 
	// MEMBERS
	int mNumberOfLegs;
	bool mHappy;

	Console mConsole;
};

#endif