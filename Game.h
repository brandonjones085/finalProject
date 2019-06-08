/*******************************************************************************
** Author:       Brandon Jones
** Date:         06/01/2019
** Description:  The header file for the Game class
*******************************************************************************/



#ifndef GAME_HPP
#define GAME_HPP

#include "Player.h"
#include "Bathroom.h"
#include "Bedroom.h"
#include "Bedroom2.h"
#include "Garage.h"
#include "Kitchen.h"
#include "Space.h"
#include "Bathroom2.h"
#include "Bathroom2.h"
#include "LivingRoom.h"


#include <vector>

class Game
{
private:
	int rounds = 1; 
	Player player; 
	Space *currentRoom; 
	int broccoliRoom; 
	bool game; 

public:
	Game();
	
	void run(); 
	void gameIntro(); 
	void gameMenu(); 
	void showMap(); 
	void runRound(); 
	int getRounds(); 
	void setRounds(int&);
	void setStartRoom(); 
	void broccoli(); 
	void setBroccoliRoom(int); 
	int getBroccoliRoom(); 
	void somethingBad(); 
	Space *getCurrentRoom(); 
	void setCurrentRoom(Space *r); 

	
};

#endif