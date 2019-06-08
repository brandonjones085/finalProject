/*******************************************************************************
** Author:       Brandon Jones
** Date:         06/01/2019
** Description:  The Bathroom class inherits from the Space class
*******************************************************************************/


#include "Bathroom.h"

#include <iostream>

//CONSTRUCTOR
Bathroom::Bathroom()
{
	roomNum = 15; 

}

//inherits from space//returns a name
std::string Bathroom::getName()
{
	return name; 
}


/*******************************************************************************
** Description:  Moves the character based on the user input received. 
** validates the user input and
** points to the surounding available options. 
*******************************************************************************/
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


	//validation 
	while (num != 1 && num != 2 && num != 4)
	{
		std::cout << "\nYou cannot go that way!\n"; 
		std::cout << "Please try again: "; 
		std::cin >> num;
		std::cin.clear();
		std::cin.ignore();
		std::cin.sync();
	
	}

	// move to Bedroom
	if (num == 1)
	{
		
		top = new Bedroom();
		currentSpace = top; 
	
	}
	//move to garage
	else if(num == 2)
	{
		bottom = new Garage();
		currentSpace = bottom; 
		
	}
	//move to living room
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
