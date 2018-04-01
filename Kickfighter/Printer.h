#pragma once
#include "Move.h"
#include <string>

class Printer
{
public:
	Printer();
	~Printer();

	void Print(Move playerMove, int playerHealth, Move enemyMove, int enemyHealth);

private:
	std::string ConvertMoveToString(Move move);
	void AddSpace(std::string& string);
};

