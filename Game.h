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
	int rounds = 0; 
	Player *player; 
	Space *currentRoom; 

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
	Space *getCurrentRoom(); 
	void setCurrentRoom(Space *r); 

	
};

#endif