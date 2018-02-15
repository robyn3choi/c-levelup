#include "Laces.h"



Laces::Laces() 
	: mTied(false)
{
}


Laces::~Laces()
{
}

bool Laces::GetTied()
{
	return mTied;
}

void Laces::SetTied(bool tied)
{
	mTied = tied;
}
