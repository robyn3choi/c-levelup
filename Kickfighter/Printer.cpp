#include "Printer.h"
#include <iostream>


Printer::Printer()
{
}


Printer::~Printer()
{
}

void Printer::Print(Move playerMove, int playerHealth, Move enemyMove, int enemyHealth)
{
	std::string playerMoveString = "Player Move: " + ConvertMoveToString(playerMove);
	AddSpace(playerMoveString);
	std::string enemyMoveString = " |     Enemy Move: " + ConvertMoveToString(enemyMove);

	std::string playerHealthString = "Player Health: " + std::to_string(playerHealth);
	AddSpace(playerHealthString);
	std::string enemyHealthString = " |     Enemy Move: " + std::to_string(enemyHealth);

	std::cout << playerMoveString  + enemyMoveString << std::endl
		<< playerHealthString + enemyHealthString;

	//std::string playerMoveString = ConvertMoveToString(playerMove);
	//std::string enemyMoveString = ConvertMoveToString(enemyMove);
	//
	//std::cout << "Player Move: " + playerMoveString + " |     Enemy Move: "
	//	+ enemyMoveString << std::endl << "Player Health: " + std::to_string(playerHealth)
	//	+ " |     Enemy Health: " + std::to_string(enemyHealth);
}

void Printer::AddSpace(std::string& string)
{
	// there should be 22 characters before |
	while (string.length() < 24)
	{
		string.append(" ");
	}
}

std::string Printer::ConvertMoveToString(Move move)
{
	switch (move)
	{
	case Move::HighKick:
		return "HighKick";

	case Move::LowKick:
		return "LowKick";

	case Move::LowBlock:
		return "LowBlock";

	case Move::HighBlock:
		return "HighBlock";

	default:
		return "None";
	}
}
