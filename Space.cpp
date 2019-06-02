#include "Space.h"

#include <iostream>


Space::Space()
{
	

}


Space *Space::move() { return nullptr; }


std::string Space::getName()
{
	return name; 
}


void *Space::getCurrentRoom()
{
	return currentSpace; 
}

void Space::welcome() {}; 

Space::~Space()
{
}
