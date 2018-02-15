#include "Cat.h"
#include "Vehicle.h"

int main()
{
	// Variable Names = camelCase - First letter is not capitalized.
	// Class Names = PascalCase	- First letter is capitalized.

	{
		Cat sammyTheTerminator;
		sammyTheTerminator.SetHappy(true);
		sammyTheTerminator.Speak();
	}


	Vehicle fordTruck;
	Vehicle dodgeTruck(3);
	Vehicle rainbowRoadTruck(60, 60);


	while (1);
	return 0;
}