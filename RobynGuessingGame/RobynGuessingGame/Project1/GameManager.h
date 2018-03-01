#pragma once
#include "GuessAnalyzer.h"

class GameManager
{
public:
	GameManager(std::string answer, int maxGuesses);
	~GameManager();
	void BeginGame();

private:
	GuessAnalyzer mGuessAnalyzer;
	std::string mAnswer;
	int mMaxGuesses;
	int mGuessesLeft;
	void GuessRound();
	void Lose();
	void Win();
	void AskToPlayAgain();
};

