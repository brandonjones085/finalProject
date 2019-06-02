#ifndef GARAGE_HPP
#define GARAGE_HPP


#include "Space.h"

#include <string>

class Garage : public Space
{

	std::string name = "Garage"; 


public:
	Garage();


	virtual Space *move(); 
	virtual std::string getName();



	~Garage();
};

#endif