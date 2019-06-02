

#ifndef BATHROOM_HPP
#define BATHROOM_HPP

#include "Space.h"
#include "LivingRoom.h"
#include "Garage.h"
#include "Bedroom.h"

class Bathroom : public Space
{
public:
	Bathroom();
	virtual Space *move();
	~Bathroom();
};

#endif