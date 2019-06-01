#ifndef PLAYER_HPP
#define PLAYER_HPP


class Player
{
private: 
	int health; 


public:
	Player();

	void setHealth(int h); 
	int getHealth(); 

	~Player();
};

#endif