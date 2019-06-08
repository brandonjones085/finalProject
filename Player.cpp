/*******************************************************************************
** Author:       Brandon Jones
** Date:         06/01/2019
** Description:  The main file where the program is run.
*******************************************************************************/


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
