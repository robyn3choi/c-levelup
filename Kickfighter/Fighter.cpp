#include "Fighter.h"



Fighter::Fighter()
{
}


Fighter::~Fighter()
{
}

void Fighter::RespondToMove(Move move)
{
	switch (move)
	{
	case Move::HighKick:
		if (mCurrentMove == Move::HighBlock)
		{
			return;
		}
		else
		{
			mHealth -= 5;
			return;
		}
	case Move::LowKick:
		if (mCurrentMove == Move::LowBlock)
		{
			return;
		}
		else
		{
			mHealth -= 5;
			return;
		}
	default:
		return;
	}
}
