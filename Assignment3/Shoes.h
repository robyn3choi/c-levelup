#pragma once

#include <string>
#include "Laces.h"

class Shoes
{
public:
	Shoes();
	Shoes(std::string color);
	~Shoes();
	const std::string& GetColor();
	void SetColor(std::string& color);
	const Laces& GetLaces();
	void SetLaces(Laces& laces);

private:
	std::string mColor;
	Laces mLaces;

};

