/*******************************************************************************
** Author:       Brandon Jones
** Date:         06/01/2019
** Description:  The main file where the program is run.
*******************************************************************************/


#include "Game.h"
#include "Player.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


Game::Game()
{
	game = true; 
}

int Game::getBroccoliRoom()
{
	return broccoliRoom; 
}

/*******************************************************************************
** Description:  This function runs the majority of the game
*******************************************************************************/

void Game::run()
{
	//prints background about game
	gameIntro(); 

	//sets the starting room
	setStartRoom();

	//creates the game loop
	while (game)//game == true
	{
		gameMenu(); 
		if (rounds < 2 || rounds % 6 == 2)
		{
			//places the brocoli in the house somewhere
			broccoli(); 

		}

		//checks if the current room is where the brocoli is located
		if (getCurrentRoom()->getRoomNum() == getBroccoliRoom())
		{
			std::cout << "\n\nYOU FOUND THE BROCCOLI\n"; 
			int h = player.getHealth(); 
			h += 10; 
			player.setHealth(h); 

			//if found, runs the function again
			broccoli(); 

		}

		//randomly occuring negative health even
		somethingBad(); 


		//health drops below 0
		if (player.getHealth() < 1)
		{
			game = false; 
			std::cout << "\n\nGAME OVER\n\n"; 
		}


	}


	std::cout << "\n\n\nGOODBYE!!!\n"; 
}



/*******************************************************************************
** Description:  Creates random number between 1 and 5. 
** The random int causes negative health events to occur
*******************************************************************************/
void Game::somethingBad()
{
	int num = std::rand() % 5 + 1;


	//1 was returned
	if (num == 1)
	{
		//found a turd
		std::cout << "\n\n\nYou went off in the corner and pooped, then ate all of it! -15 health\n"; 
		int h = player.getHealth(); 
		h -= 15; 
		player.setHealth(h); 

	}

	//2 was returned
	else if (num == 2)
	{
		//found a dead worm
		std::cout << "\n\n\nYou went off in the corner and pooped, then ate all of it! -10 health\n";
		int h = player.getHealth();
		h -= 10;
		player.setHealth(h);

	}
	//3 was returned
	else if (num == 3)
	{
		//found a random piece of hair
		std::cout << "\n\n\nYou went off in the corner and pooped, then ate all of it! -5 health\n";
		int h = player.getHealth();
		h -= 5; 
		player.setHealth(5); 
	}


}



void Game::setBroccoliRoom(int i)
{
	this->broccoliRoom = i; 
}


/*******************************************************************************
** Description: Background behind the game. 
** Only run once in the beginning
*******************************************************************************/
void Game::gameIntro()
{
	std::cout << "\nWelcome to the chihuahua house\n\n"; 
	std::cout << "\n\nIt's a big scary world for a small chihuahua named Daphne\n"; 
	std::cout << "\nYou are in a house with seven rooms\n"; 
	std::cout << "2 Bathroom\n"; 
	std::cout << "2 Bedrooms\n"; 
	std::cout << "1 Living room\n"; 
	std::cout << "1 Kitchen\n"; 
	std::cout << "1 Garage\n"; 
	std::cout << "\n\nYou are always hungry and looking for food.\nPlus you will eat anything you find on the ground.\nEVEN if it's bad for your health\n"; 
	std::cout << "Sometimes a piece of broccoli appears in one of the rooms and your goal is to reach that room\n"; 
	std::cout << "\nHowever, you are easily distracted.\nSometimes eat things that will damage your health while trying to reach the broccoli\n"; 
	std::cout << "Your goal is to eat 10 pieces of broccoli\n";
	std::cout << "Each piece of broccoli is 10 points\n"; 
	std::cout << "Eating something bad for you will decrease your health\n"; 
	std::cout << "Each room has it's own special qualities.\n"; 
	std::cout << "Some rooms will randomly contain medicine which you can hold onto to help your health when you eat something bad\n"; 
	std::cout << "GOOD LUCK!\n\n"; 
	std::cout << "Game based on actual events!";


}


/*******************************************************************************
** Description:  Function runs every loop. 
** Asks player if they'd like to see the map or move to another room
*******************************************************************************/
void Game::gameMenu()
{
	std::cout << "You are in the " << currentRoom->getName() << std::endl;
	std::cout << "Players health: " << player.getHealth() << std::endl; 
	int num; 
	std::cout << "what would you like to do next?\n";
	std::cout << "1. Show map\n"; 
	std::cout << "2. Change room\n"; 

	std::cin >> num; 
	//validateNum(num); 

	if (num == 1)
	{
		//show map

		//prints the map
		showMap(); 

		//runs function again
		gameMenu(); 
	}
	else if (num == 2)
	{
		//change room
		runRound(); 
	}

}


int Game::getRounds()
{
	return rounds; 
}

void Game::setRounds(int &i)
{
	this->rounds = i; 
}


 Space *Game::getCurrentRoom()
{
	 return currentRoom; 
}


void Game::setCurrentRoom(Space *r)
{
	this->currentRoom = r; 

}

/*******************************************************************************
** Description:  creates a random int between 14 and 20. 
** The int returned is used to place the broccoli randomly in the house 
*******************************************************************************/

void Game::broccoli()
{
	 
	int num = std::rand() % 20 + 14;

	if (num == 14)
	{
		//garage
		std::cout << "\n\n-----------------The broccoli is in the garage--------------------\n\n\n\n\n";
		setBroccoliRoom(14); 
	}
	else if (num == 15)
	{
		//bathroom1
		std::cout << "\n\n-----------------The broccoli is in bathroom 1--------------------\n\n\n\n\n";
		setBroccoliRoom(15);
	}
	else if (num == 16)
	{
		//bedroom1
		std::cout << "\n\n-----------------The broccoli is in bedroom 1--------------------\n\n\n\n\n";
		setBroccoliRoom(16);
	}
	else if (num == 17)
	{
		//kitchen
		std::cout << "\n\n-----------------The broccoli is in the kitchen--------------------\n\n\n\n\n";
		setBroccoliRoom(17);
	}
	else if (num == 18)
	{
		//living room
		std::cout << "\n\n-----------------The broccoli is in the living room------------------\n\n\n\n\n";
		setBroccoliRoom(18);
	}
	else if (num == 19)
	{
		//bedroom2
		std::cout << "\n\n-----------------The broccoli is in bedroom 2--------------------\n\n\n\n\n";
		setBroccoliRoom(19);
	}
	else if (num == 20)
	{
		//bathroom2
		std::cout << "\n\n-----------------The broccoli is in bathroom 2--------------------\n\n\n\n\n";
		setBroccoliRoom(20);
	}


}



/*******************************************************************************
** Description:  This is run every time the place decices to move rooms
*******************************************************************************/
void Game::runRound()
{
	Space *s = getCurrentRoom(); 
	Player p; 
	
	int r = getRounds(); 

	std::cout << "Rounds #" << r << std::endl;
	std::cout << "Players health: " << p.getHealth() << std::endl; 
	  
	setCurrentRoom(s->move());

	std::cout << "\n\n\nYou are moving into the " << getCurrentRoom()->getName() << std::endl; 

	r += 1; 
	setRounds(r); 

}


/*******************************************************************************
** Description:  Prints the map of the house
*******************************************************************************/
void Game::showMap()
{
	std::cout << "__________________________________________________________\n"; 
	std::cout << "|               |                     |                   |\n";
	std::cout << "|  Bedroom 1    |     Kitchen         |     Bathroom 2    |\n";
	std::cout << "|               |                     |                   |\n";
	std::cout << "|_______________|_____________________|___________________|\n";
	std::cout << "|               |                     |                   |\n";
	std::cout << "|  Bathroom 1   |     Living Room     |     Bedroom 2     |\n";
	std::cout << "|               |                     |                   |\n";
	std::cout << "|_______________|_____________________|___________________|\n";
	std::cout << "|               |\n";
	std::cout << "|   Garage      |\n";
	std::cout << "|_______________|\n";
}


/*******************************************************************************
** Description: creates a random int and uses that value to place the 
** player randomly within the house somewhere
*******************************************************************************/
void Game::setStartRoom()
{

	int num = std::rand() % 7 + 1; 

	if (num == 1)
	{
		//garage
		std::cout << "\n\n\n\nYou are starting in the Garage!\n";
		setCurrentRoom(new Garage()); 
		
	}
	else if (num == 2)
	{
		//kitchen
		std::cout << "\n\n\n\nYou are starting in the Kitchen!\n";
		setCurrentRoom(new Kitchen());
		
	}
	else if (num == 3)
	{
		//bathroom 1
		std::cout << "\n\n\n\nYou are starting in the Bathroom 1!\n";
		setCurrentRoom(new Bathroom());
		
	}
	else if (num == 4)
	{
		//bathroom 2
		std::cout << "\n\n\n\nYou are starting in the Bathroom 2!\n";
		setCurrentRoom(new Bathroom2());
		
	}
	else if (num == 5)
	{
		//bedroom 1
		std::cout << "\n\n\n\nYou are starting in Bedroom 1!\n";
		setCurrentRoom(new Bedroom());
		
	}

	else if (num == 6)
	{
		//bedroom 2
		std::cout << "\n\n\n\nYou are starting in Bedroom 2!\n";
		setCurrentRoom(new Bedroom2());
	
	}
	else
	{
		//living room; 
		std::cout << "\n\n\n\nYou are starting in the Living Room!\n";
		setCurrentRoom(new LivingRoom());
		
	}

}