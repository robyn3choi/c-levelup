#ifndef CONSOLE_H
#define CONSOLE_H

#include <string>

class Console
{
public:
	Console();
	~Console();

	void NewLine();
	void Print(std::string string);

	std::string GetInput();
};

#endif