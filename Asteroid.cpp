#include <iostream>
#include "Asteroid.h"


Asteroid::Asteroid(int size, int x_pos, int y_pos)
{
	cout << "Constructor is running!" << endl;
	setSize(size);
	setSpeed(x_pos, y_pos);
	
}


void Asteroid::setSize(int size)
{
		int newSize = size;
		if(size < MINSIZE){
			newSize = MINSIZE;
			cout << "Asteroid's new size is: " << newSize << "\n";
		} else if (size > MAXSIZE){
			newSize = MAXSIZE;
			cout << "Asteroid's new size is: " << newSize << "\n";
		} else {
			newSize = newSize;
			cout << "Asteroid's new size is: " << newSize << "\n";
		}
}

void Asteroid::setSpeed(int x_pos, int y_pos)
{
		int newX = x_pos;
		int newY = y_pos;

		if(newX > MAXSPEED){
			newX = MAXSPEED;
			cout << "New x-axis speed is: " << newX << endl; 
		} else if (newX < MINSPEED){
			newX = MINSPEED;
			cout << "New x-axis speed is: " << newX << endl;
		} else {
			newX = newX;
			cout << "New x-axis speed is: " << newX << endl;
		}

		if(newY > MAXSPEED){
			newY = MAXSPEED;
			cout << "New y-axis speed is: " << newY << endl;
		} else if (newY < MINSPEED){
			newY = MINSPEED;
			cout << "New y-axis speed is: " << newY << endl;
		} else {
			newY = newY;
			cout << "New y-axis speed is: " << newY << endl;
		}
}

Asteroid::~Asteroid()
{
	cout << "Destructor is running!" << endl;
}	
