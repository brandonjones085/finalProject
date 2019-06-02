


#include "Kitchen.h"
#include "LivingRoom.h"
#include "Bathroom2.h"
#include "Bedroom.h"


#include <iostream>


Kitchen::Kitchen()
{
	
	
	

}

std::string Kitchen::getName()
{
	return name;
}


Space *Kitchen::move()
{

	int num;
	std::cout << "You are in the Bathroom 1...\n";
	std::cout << "Which direction would you like to move?\n";
	std::cout << "1. Up\n";
	std::cout << "2. Down\n";
	std::cout << "3. Left\n";
	std::cout << "4. Right\n";
	std::cin >> num;

	while (num != 3 && num != 2 && num != 4)
	{
		std::cout << "\nYou cannot go that way!\n";
		std::cout << "Please try again: ";
		std::cin >> num;
		std::cin.clear();
		std::cin.ignore();
		std::cin.sync();
		move();

	}

	if (num == 2)
	{
		bottom = new LivingRoom();
		currentSpace = bottom;

	}
	else if (num == 3)
	{
		left = new Bedroom();
		currentSpace = left;

	}
	else if (num == 4)
	{
		right = new Bathroom2();
		currentSpace = right;
	}

	return currentSpace;


}