#ifndef GARAGE_HPP
#define GARAGE_HPP


#include "Space.h"



class Garage : public Space
{

public:
	Garage();


	virtual Space *move(); 




	~Garage();
};

#endif