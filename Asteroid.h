#ifndef ASTEROID_H
#define ASTEROID_H
#include <iostream>
using std::cout;
using std::endl;

class Asteroid
{
public:



	Asteroid(int size, int x_pos, int y_pos);

	void setSize(int size);
	void setSpeed(int x_pos, int y_pos);

	~Asteroid();
	

private:	
	static const int MINSIZE = 1;
	static const int MAXSIZE = 20;
	static const int MINSPEED = -50;
	static const int MAXSPEED = 50;

	int size;
	int x_pos;
	int y_pos;
};

#endif
