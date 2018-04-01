#include "Player.h"

Player::Player(Utils::Input* input) : mInput(input)
{
}


Player::~Player()
{
}

void Player::MakeMove()
{
	Utils::Input::Key key = mInput->GetLastInput();
	mCurrentMove = ConvertKeyToMove(key);
}

Move Player::ConvertKeyToMove(Utils::Input::Key key)
{
	switch (key)
	{
	case Utils::Input::Key::Up:
		return Move::HighKick;

	case Utils::Input::Key::Down:
		return Move::LowKick;

	case Utils::Input::Key::Right:
		return Move::LowBlock;

	case Utils::Input::Key::Left:
		return Move::HighBlock;

	default:
		return Move::None;
	}
}