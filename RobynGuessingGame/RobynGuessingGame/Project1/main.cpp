#include <iostream>
#include <string>
#include "GameManager.h"

const std::string ANSWER = "erase";
const int MAX_GUESSES = 10;

int main()
{
	GameManager gameManager(ANSWER, MAX_GUESSES);
	gameManager.BeginGame();
	return 0;
}