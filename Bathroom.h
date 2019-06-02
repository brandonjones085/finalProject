

#ifndef BATHROOM_HPP
#define BATHROOM_HPP


#include <string>

#include "Space.h"
#include "LivingRoom.h"
#include "Garage.h"
#include "Bedroom.h"

class Bathroom : public Space
{
private: 
	std::string name = "Bathroom 1";


public:
	Bathroom();
	virtual Space *move();
	virtual std::string getName();
	~Bathroom();
};

#endif