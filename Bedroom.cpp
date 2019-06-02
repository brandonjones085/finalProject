#include "Bedroom.h"
#include "Bathroom.h"
#include "Kitchen.h"

#include <iostream>


Bedroom::Bedroom()
{
	roomNum = 16;
}



std::string Bedroom::getName()
{
	return name;
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

	while ( num != 2 && num != 4)
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
		right = new Kitchen();
		currentSpace = right; 
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
