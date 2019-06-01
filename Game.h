#ifndef GAME_HPP
#define GAME_HPP

#include "Player.h"
#include "Bathroom.h"
#include "Bedroom.h"
#include "Garage.h"
#include "Kitchen.h"





class Game
{
private:
	int rounds = 0; 
	Player *player; 



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

	
};

#endif