#include "GuessAnalyzer.h"
#include <algorithm>

GuessAnalyzer::GuessAnalyzer(std::string answer)
{
	std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
	mAnswerLowercase = answer;

	// initialize hash table
	for (char c : answer)
	{
		if (mCharCounts.count(c) == 0) // if key doesn't exist
		{
			mCharCounts.insert(std::pair<char, int>(c, 0));
		}
	}
}

GuessAnalyzer::~GuessAnalyzer()
{
}

GuessResult GuessAnalyzer::Guess(std::string guess)
{
	std::transform(guess.begin(), guess.end(), guess.begin(), ::tolower);

	int bulls = 0;
	int cows = 0;
	for (int i = 0; i < guess.length(); i++)
	{
		if (guess[i] == mAnswerLowercase[i])
		{
			bulls++;
		}
		else if (mCharCounts.count(guess[i]) > 0)
		{
			cows++;
		}
	}
	GuessResult result;
	result.Bulls = bulls;
	result.Cows = cows;
	return result;
}
