#pragma once
#include <exception>

class VowelException : public std::exception
{
public:
	const char* what() const override
	{
		return "Name starts with a vowel.";
	}
};

class EvenLegsException : public std::exception
{
public:
	const char* what() const override
	{
		return "Number of legs is even.";
	}
};

class LengthException : public std::exception
{
public:
	const char* what() const override
	{
		return "Length is < 0.001f or > 0.1f.";
	}
};