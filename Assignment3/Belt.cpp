#include "Belt.h"



Belt::Belt()
	: mSize(1)
{
}


Belt::~Belt()
{
}

int Belt::GetSize()
{
	return mSize;
}

void Belt::SetSize(int size)
{
	mSize = size;
}
