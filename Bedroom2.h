/*******************************************************************************
** Author:       Brandon Jones
** Date:         06/01/2019
** Description:  The header file for the bedroom 2 class
*******************************************************************************/



#ifndef BEDROOM2_HPP
#define BEDROOM2_HPP

#include "Space.h"


#include <string>

class Bedroom2 : public Space
{

private: 
	std::string name = "Bedroom 2";


public:
	Bedroom2();
	virtual Space *move();
	virtual std::string getName();
	~Bedroom2();
};


#endif