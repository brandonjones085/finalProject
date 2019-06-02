#include "Bathroom.h"



#include <iostream>

Bathroom::Bathroom()
{
	roomNum = 15; 

}


std::string Bathroom::getName()
{
	return name; 
}



Space *Bathroom::move()
{

	int num;
	std::cout << "You are in the Bathroom 1...\n";
	std::cout << "Which direction would you like to move?\n";
	std::cout << "1. Up\n";
	std::cout << "2. Down\n";
	std::cout << "3. Left\n";
	std::cout << "4. Right\n";
	std::cin >> num;

	while (num != 1 && num != 2 && num != 4)
	{
		std::cout << "\nYou cannot go that way!\n"; 
		std::cout << "Please try again: "; 
		std::cin >> num;
		std::cin.clear();
		std::cin.ignore();
		std::cin.sync();
	

	}

	if (num == 1)
	{
		
		top = new Bedroom();
		currentSpace = top; 
	
	}
	else if(num == 2)
	{
		bottom = new Garage();
		currentSpace = bottom; 
		
	}
	else if (num == 4)
	{
		right = new LivingRoom(); 
		currentSpace = right; 
		
	}
	return currentSpace; 
}



Bathroom::~Bathroom()
{
}
