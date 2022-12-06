#include "Player.h"
#include <Novice.h>

Player::Player() {
	posX_ = 50;
	posY_ = 0;
	speedX_ = 10;
	speedY_ = 10;
	radius_ = 50;

	UP = false;
	RIGHT = false;
}

void Player::Move() {
	//	ˆÚ“®ƒtƒ‰ƒO
	if (posX_ + radius_ >= 1280)
	{
		RIGHT = false;
	}
	else if (posX_ - radius_ <= 0)
	{
		RIGHT = true;
	}

	if (posY_ + radius_ >= 720)
	{
		UP = true;
	}
	else if (posY_ - radius_ <= 0)
	{
		UP = false;
	}

	//	ˆÚ“®ˆ—
	if (UP == true)
	{
		posY_ -= speedY_;
	}
	else 
	{
		posY_ += speedY_;
	}

	if (RIGHT == true)
	{
		posX_ += speedX_;
	}
	else
	{
		posX_ -= speedX_;
	}
}

void Player::Draw() {
	Novice::DrawEllipse(posX_, posY_, radius_, radius_, 0.0f, 0xffffffff, kFillModeSolid);
}