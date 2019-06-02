#include "Bedroom2.h"
#include "Bathroom2.h"
#include "LivingRoom.h"

#include <iostream>

Bedroom2::Bedroom2()
{
	roomNum = 19;

}


std::string Bedroom2::getName()
{
	return name;
}

Space *Bedroom2::move()
{

	int num;
	std::cout << "You are in the Bedroom 1...\n";
	std::cout << "Which direction would you like to move?\n";
	std::cout << "1. Up\n";
	std::cout << "2. Down\n";
	std::cout << "3. Left\n";
	std::cout << "4. Right\n";
	std::cin >> num;

	while (num != 1 && num != 3)
	{
		std::cout << "\nYou cannot go that way!\n";
		std::cout << "Please try again: ";
		std::cin >> num;
		std::cin.clear();
		std::cin.ignore();
		std::cin.sync();
		move();

	}

	if (num == 1)
	{
		top = new Bathroom2();
		currentSpace = top;


	}
	else if (num == 3)
	{
		left = new LivingRoom();
		currentSpace = left;

	}

	return currentSpace;
}


Bedroom2::~Bedroom2()
{
}
