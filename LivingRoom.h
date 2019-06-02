
#ifndef LIVINGROOM_HPP
#define LIVINGROOM_HPP

#include "Space.h"

class LivingRoom : public Space
{
private: 
	std::string name = "Living Room";


public:
	LivingRoom();
	virtual Space *move();
	virtual std::string getName();
	~LivingRoom();
};


#endif

