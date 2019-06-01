#include "Game.h"
#include "Player.h"

#include <iostream>


Game::Game()
{
}

void Game::run()
{

	bool game = true; 
	gameIntro(); 

	while (game)
	{
		gameMenu(); 
	}
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
	std::cout << "\n\nYou are always hungry and looking for food\n. Plus you will eat anything you find on the ground. EVEN if it's bad for your health"; 
	std::cout << "Every turn a piece of broccoli appears in one of the rooms and your goal is to reach that room\n"; 
	std::cout << "However, you are easily distracted and sometimes eat things that will damage your health while trying to reach the broccoli\n"; 
	std::cout << "Your goal is to eat 10 pieces of broccoli\n";
	std::cout << "Each piece of broccoli is 10 points\n"; 
	std::cout << "Eating something bad for you will decrease your health\n"; 
	std::cout << "Each room has it's own characteristics.\n"; 
	std::cout << "Sometimes a medicine will appear in the rooms and you'll have the hold onto that medicine for when you accidentally eat something bad for your health\n"; 
	std::cout << "GOOD LUCK!\n\n"; 
	std::cout << "Game based on actual events!";


}

void Game::gameMenu()
{

	int num; 
	std::cout << "what would you like to do next?\n";
	std::cout << "1. Show room\n"; 
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
	}

}


void Game::showMap()
{
	std::cout << "_______________________________________________________\n"; 
	std::cout << "|               |                     |               |\n";
	std::cout << "|  Bedroom 1    |     Kitchen         | Bathroom 2    |\n";
	std::cout << "|               |                     |               |\n";
	std::cout << "|_______________|_____________________|_______________|\n";
	std::cout << "|               |                     |               |\n";
	std::cout << "|  Bathroom 1   |     Living Room     | Bedroom 2     |\n";
	std::cout << "|               |                     |               |\n";
	std::cout << "|_______________|_____________________|_______________|\n";
	std::cout << "|               |\n";
	std::cout << "|  Garage       |\n";
	std::cout << "|_______________|\n";

}



Game::~Game()
{
}
