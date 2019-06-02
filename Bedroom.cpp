#include "Bedroom.h"



#include <iostream>


Bedroom::Bedroom()
{
	this->top = nullptr; 
	this->left = nullptr; 
}


Space *Bedroom::move()
{

	int num;
	std::cout << "You are in the Bedroom 1...\n";
	std::cout << "Which direction would you like to move?\n";
	std::cout << "1. Up\n";
	std::cout << "2. Down\n";
	std::cout << "3. Left\n";
	std::cout << "4. Right\n";
	std::cin >> num;

	while ( num != 2 || num != 4)
	{
		std::cout << "\nYou cannot go that way!\n";
		std::cout << "Please try again: ";
		std::cin >> num;
		std::cin.clear();
		std::cin.ignore();
		std::cin.sync();
		move();

	}

	if (num == 4)
	{
		
			top = new Kitchen();
		

	}
	else if (num == 2)
	{
		bottom = new Bathroom();
		currentSpace = bottom; 
	
	}
	
	return currentSpace; 
}




Bedroom::~Bedroom()
{
}
