#include "Player.h"



Player::Player()
{

	this->health = 5; 

}


void Player::setHealth(int h)
{
	this->health = h; 
}

int Player::getHealth()
{
	return health; 
}





Player::~Player()
{
}
