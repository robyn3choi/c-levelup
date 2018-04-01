#include "Enemy.h"
#include <stdlib.h> 

Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}

void Enemy::MakeMove()
{
	mCurrentMove = static_cast<Move>(rand() % 5);
}
