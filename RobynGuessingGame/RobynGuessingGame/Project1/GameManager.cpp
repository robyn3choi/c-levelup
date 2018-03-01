#include "GameManager.h"
#include <iostream>
#include <algorithm>

GameManager::GameManager(std::string answer, int maxGuesses) 
	: mGuessAnalyzer(answer), mAnswer(answer), mMaxGuesses(maxGuesses), mGuessesLeft(maxGuesses)
{
}

GameManager::~GameManager()
{
}

void GameManager::BeginGame()
{
	mGuessesLeft = mMaxGuesses;
	std::cout << "Welcome to Bulls & Cows!" << std::endl << "Can you guess the " << mAnswer.length() << " letter word I'm thinking of?" << std::endl;
	GuessRound();
}

void GameManager::GuessRound()
{
	std::string guess;
	std::cout << std::endl << "Guesses left: " << mGuessesLeft << std::endl << "Guess: ";
	std::cin >> guess;

	if (guess.length() != mAnswer.length())
	{
		std::cout << "Your guess needs to be " << mAnswer.length() << " letters long." << std::endl;
		GuessRound();
		return;
	}

	GuessResult result = mGuessAnalyzer.Guess(guess);
	if (result.Bulls == mAnswer.length())
	{
		Win();
	}
	else
	{
		std::cout << "Bulls (letters correct and in the correct place): " << result.Bulls << std::endl;
		std::cout << "Cows (letters correct but not in the correct place): " << result.Cows << std::endl;
	}

	mGuessesLeft--;
	if (mGuessesLeft == 0)
	{
		Lose();
	}
	else 
	{
		GuessRound();
	}
}


void GameManager::Lose()
{
	std::cout << "You lose!!" << std::endl;
	AskToPlayAgain();
}

void GameManager::Win()
{
	std::cout << "You win!!" << std::endl;
	AskToPlayAgain();
}

void GameManager::AskToPlayAgain()
{
	std::string response;
	std::cout << "Do you want to play again? (y/n) ";
	std::cin >> response;

	std::transform(response.begin(), response.end(), response.begin(), ::tolower);
	if (response == "y")
	{
		std::cout << std::endl;
		BeginGame();
	}
	else if (response == "n")
	{
		exit(0);
	}
}
