#pragma once

#include <string>
#include "Belt.h"
#include "Shoes.h"

class Human
{
public:
	Human();
	Human(std::string name, int beltSize, std::string shoeColor);
	~Human();
	const Belt& GetBelt();
	void SetBelt(Belt& belt);
	const Shoes& GetShoes();
	void SetShoes(Shoes& shoes);
	const std::string& GetName();
	void SetName(std::string& name);

private:
	Belt mBelt;
	Shoes mShoes;
	std::string mName;
};

