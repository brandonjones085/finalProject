

#ifndef BATHROOM2_HPP
#define BATHROOM2_HPP

#include <string>


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