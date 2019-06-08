

#ifndef BATHROOM2_HPP
#define BATHROOM2_HPP

#include <string>

/*******************************************************************************
** Author:       Brandon Jones
** Date:         06/01/2019
** Description:  The header file for the Bathroom2 class
*******************************************************************************/


#include "Space.h"

class Bathroom2 : public Space
{
private:
	std::string name = "Bathroom 2";


public:
	Bathroom2();
	virtual Space *move(); 
	virtual std::string getName();
	~Bathroom2();
};

#endif