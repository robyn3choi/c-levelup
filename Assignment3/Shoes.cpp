#include "Shoes.h"



Shoes::Shoes() :
	mColor("Black"),
	mLaces()
{
}


Shoes::~Shoes()
{
}

const std::string& Shoes::GetColor()
{
	return mColor;
}

void Shoes::SetColor(std::string& color)
{
	mColor = color;
}

const Laces& Shoes::GetLaces()
{
	return mLaces;
}

void Shoes::SetLaces(Laces& laces)
{
	mLaces = laces;
}
