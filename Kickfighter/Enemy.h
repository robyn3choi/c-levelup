#pragma once
#include "Fighter.h"
class Enemy : public Fighter
{
public:
	Enemy();
	~Enemy();

	void MakeMove() override;
};

