#pragma once
#include "Move.h"

class Fighter
{
public:
	Fighter();
	~Fighter();

	int GetHealth() const { return mHealth; }
	Move GetCurrentMove() const { return mCurrentMove; }
	void RespondToMove(Move move);
	virtual void MakeMove() = 0;

protected:
	int mHealth = 100;
	Move mCurrentMove;
};

