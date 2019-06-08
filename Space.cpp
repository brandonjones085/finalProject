/*******************************************************************************
** Author:       Brandon Jones
** Date:         06/01/2019
** Description:  The Space class is the base class for several inheriting classes
*******************************************************************************/


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


int Space::getRoomNum()
{
	return roomNum; 
}

void *Space::getCurrentRoom()
{
	return currentSpace; 
}

void Space::welcome() {}; 

Space::~Space()
{
}
