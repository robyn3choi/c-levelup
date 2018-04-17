#include "BitArray64.h"



BitArray64::BitArray64()
{
}


BitArray64::~BitArray64()
{
}

int BitArray64::Get()
{
	for (int i = 0; i < ArraySize; i++)
	{
		if (!(mBitsInUse & (1 << i)))
		{
			mBitsInUse |= (1 << i);
			return i;
		}
	}
	return -1;
}

void BitArray64::Return(int index)
{
	mBitsInUse &= ~(1 << index);
}

void BitArray64::Set(int index, bool value)
{
	if (value == true)
	{
		mBits |= (1 << index);
	}
	else
	{
		mBits &= ~(1 << index);
	}
}

bool BitArray64::Value(int index)
{
	return mBits & (1 << index);
}
