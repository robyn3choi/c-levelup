#pragma once
#include "Fighter.h"
#include "Input.h"

class Player : public Fighter
{
public:
	Player(Utils::Input* input);
	~Player();

	void MakeMove() override;
	Utils::Input::Key mKey;

private:
	Move ConvertKeyToMove(Utils::Input::Key key);
	Utils::Input* mInput;
	
};

