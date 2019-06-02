#ifndef BEDROOM_HPP
#define BEDROOM_HPP

#include "Space.h"
#include "Bathroom.h"
#include "Kitchen.h"

class Bedroom : public Space
{
public:
	Bedroom();
	virtual Space *move();
	
	~Bedroom();
};


#endif