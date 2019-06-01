
#ifndef SPACE_HPP
#define SPACE_HPP


class Space
{
protected: 
	int *top; 
	int *right; 
	int *left; 
	int *bottom; 


public:
	Space();
	~Space();
};


#endif