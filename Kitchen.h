#ifndef KITCHEN_HPP
#define KITCHEN_HPP

#include "Space.h"

#include <string>

class Kitchen : public Space
{
private: 
	std::string name = "Kitchen";


public:
	Kitchen();
	virtual Space *move();
	virtual std::string getName();
	~Kitchen();
};

#endif