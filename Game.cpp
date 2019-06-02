#include "Game.h"
#include "Player.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


Game::Game()
{


}

int Game::getBroccoliRoom()
{
	return broccoliRoom; 
}

void Game::run()
{
	Player p; 
	bool game = true; 
	gameIntro(); 
	setStartRoom();
	while (game)
	{
		gameMenu(); 
		if (rounds % 6 == 1)
		{
			broccoli(); 

		}
		
		if (getCurrentRoom()->getRoomNum() == getBroccoliRoom())
		{
			std::cout << "\n\nYOU FOUND THE BROCCOLI"; 
			int h = p.getHealth(); 
			h += 10; 
			p.setHealth(h); 

		}


	}
}



void Game::setBroccoliRoom(int i)
{
	this->broccoliRoom = i; 
}

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
	std::cout << "Every turn a piece of broccoli appears in one of the rooms and your goal is to reach that room\n"; 
	std::cout << "\nHowever, you are easily distracted.\nSometimes eat things that will damage your health while trying to reach the broccoli\n"; 
	std::cout << "Your goal is to eat 10 pieces of broccoli\n";
	std::cout << "Each piece of broccoli is 10 points\n"; 
	std::cout << "Eating something bad for you will decrease your health\n"; 
	std::cout << "Each room has it's own characteristics.\n"; 
	std::cout << "Some rooms will randomly contain medicine which you can hold onto to help your health when you eat something bad\n"; 
	std::cout << "GOOD LUCK!\n\n"; 
	std::cout << "Game based on actual events!";


}

void Game::gameMenu()
{

	std::cout << "You are in the " << currentRoom->getName() << std::endl;
	int num; 
	std::cout << "what would you like to do next?\n";
	std::cout << "1. Show map\n"; 
	std::cout << "2. Change room\n"; 

	std::cin >> num; 
	//validateNum(num); 

	if (num == 1)
	{
		//show map
		showMap(); 
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







void Game::broccoli()
{
	 
	int num = std::rand() % 7 + 1;

	if (num == 1)
	{
		//garage
		std::cout << "\n\n-----------------The broccoli is in the garage\n\n\n\n--------------------";
		setBroccoliRoom(1); 
	}
	else if (num == 2)
	{
		//bathroom1
		std::cout << "\n\n-----------------The broccoli is in bathroom 1\n\n\n\n--------------------";
		setBroccoliRoom(2);
	}
	else if (num == 3)
	{
		//bedroom1
		std::cout << "\n\n-----------------The broccoli is in bedroom 1\n\n\n\n--------------------";
		setBroccoliRoom(3);
	}
	else if (num == 4)
	{
		//kitchen
		std::cout << "\n\n-----------------The broccoli is in the kitchen\n\n\n\n--------------------";
		setBroccoliRoom(4);
	}
	else if (num == 5)
	{
		//living room
		std::cout << "\n\n-----------------The broccoli is in the living room\n\n\n\n--------------------";
		setBroccoliRoom(5);
	}
	else if (num == 6)
	{
		//bedroom2
		std::cout << "\n\n-----------------The broccoli is in bedroom 2\n\n\n\n--------------------";
		setBroccoliRoom(6);
	}
	else if (num == 7)
	{
		//bathroom2
		std::cout << "\n\n-----------------The broccoli is in bathroom 2\n\n\n\n--------------------";
		setBroccoliRoom(7);
	}


}


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



void Game::setStartRoom()
{
	int num = 1; 
	//int num = std::rand() % 7 + 1; 

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
		//currentRoom = Kitchen();
	}
	else if (num == 3)
	{
		//bathroom 1
		std::cout << "\n\n\n\nYou are starting in the Bathroom 1!\n";
		//currentRoom = Bathroom();
	}
	else if (num == 4)
	{
		//bathroom 2
		std::cout << "\n\n\n\nYou are starting in the Bathroom 2!\n";
		//currentRoom = Bathroom2();
	}
	else if (num == 5)
	{
		//bedroom 1
		std::cout << "\n\n\n\nYou are starting in Bedroom 1!\n";
		//currentRoom =Bedroom();
	}

	else if (num == 6)
	{
		//bedroom 2
		std::cout << "\n\n\n\nYou are starting in Bedroom 2!\n";
		//currentRoom = Bedroom2(); 
	}
	else
	{
		//living room; 
		std::cout << "\n\n\n\nYou are starting in the Living Room!\n";
		//currentRoom = LivingRoom();
	}

}