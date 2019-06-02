
#ifndef SPACE_HPP
#define SPACE_HPP

#include <string>

class Space
{
protected: 
	
	Space *currentSpace; 
	Space *top;
	Space *right;
	Space *left;
	Space *bottom;
	std::string name = "Space";
	int roomNum; 




public:
	Space();
	virtual Space *move(); 
	virtual void welcome(); 
	virtual std::string getName();
	virtual int getRoomNum(); 
	
	virtual void *getCurrentRoom();


	~Space();
};


#endif