#include "menu.h"
#include "validateMenu.h"

#include <iostream>


int menu()
{
	int num; 
	std::cout << "\n\nWhat would you like to do? \n";
	std::cout << "\n1. Play\n"; 
	std::cout << "2. Exit"; 
	std::cin >> num; 
	validateMenu(num);

	return num; 

}