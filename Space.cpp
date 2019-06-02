#include "Space.h"

#include <iostream>


Space::Space()
{
	bottom = nullptr;
	top = nullptr;
	right = nullptr;
	top = nullptr;

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
