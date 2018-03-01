#pragma once
#include <string>
#include <unordered_map>
#include "GuessResult.h"

class GuessAnalyzer
{
public:
	GuessAnalyzer(std::string answer);
	~GuessAnalyzer();
	GuessResult Guess(std::string guess);

private:
	std::string mAnswerLowercase;
	std::unordered_map<char, int> mCharCounts;
};

