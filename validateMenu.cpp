#include "validateMenu.h"
#include <iostream>


void validateMenu(int &i)
{
	while (!std::cin || (i < 1 || i > 2))
	{
		std::cin.clear(); 
		std::cin.sync(); 
		std::cin.ignore(); 
		std::cout << "\nInvalid input! Try again: "; 
		std::cin >> i; 
	}
}