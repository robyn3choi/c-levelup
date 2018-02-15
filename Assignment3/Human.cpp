#include "Human.h"



Human::Human()
{
}


Human::~Human()
{
}

const Belt& Human::GetBelt()
{
	return mBelt;
}

void Human::SetBelt(Belt& belt)
{
	mBelt = belt;
}

const Shoes& Human::GetShoes()
{
	return mShoes;
}

void Human::SetShoes(Shoes & shoes)
{
	mShoes = shoes;
}

const std::string& Human::GetName()
{
	return mName;
}

void Human::SetName(std::string & name)
{
	mName = name;
}
