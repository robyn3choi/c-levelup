#include "Shorse.h"
#include "Platyporse.h"
#include "Utils.h"

int main()
{
	Shorse shorses[4] = { Shorse(1), Shorse(2), Shorse(3), Shorse(4) };
	Platyporse platyPorses [4] = { Platyporse(4), Platyporse(3), Platyporse(2), Platyporse(1) };

	Utils::GetLargestItem(shorses, 4);
	Utils::GetLargestItem(platyPorses, 4);

	Utils::GetSmallestItem(shorses, 4);
	Utils::GetSmallestItem(platyPorses, 4);

	while (1);
	return 0;
}