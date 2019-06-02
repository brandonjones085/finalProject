#include "LivingRoom.h"
#include "Kitchen.h"
#include "Bedroom2.h"
#include "Bathroom.h"

#include <iostream>


LivingRoom::LivingRoom()
{
	roomNum = 18;
}


std::string LivingRoom::getName()
{
	return name;
}


Space *LivingRoom::move()
{

	int num;
	std::cout << "You are in the Garage...\n";
	std::cout << "Which direction would you like to move?\n";
	std::cout << "1. Up\n";
	std::cout << "2. Down\n";
	std::cout << "3. Left\n";
	std::cout << "4. Right\n";
	std::cin >> num;

	while (num != 1 && num != 3 && num != 4)
	{
		std::cout << "\nYou cannot go that way!\n";
		std::cout << "Please try again\n";

		std::cin.clear();
		std::cin.ignore();
		std::cin.sync();
		std::cin >> num;
	}


	if (num == 1)
	{
		top = new Kitchen();
		currentSpace = top;
	}
	else if (num == 3)
	{
		left = new Bathroom();
		currentSpace = left;
	}
	else if (num == 4)
	{
		right = new Bedroom2();
		currentSpace = right; 
	}


	return currentSpace;

}


LivingRoom::~LivingRoom()
{
}
