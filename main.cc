#include <iostream>
#include "Asteroid.h"

using namespace std;


int main()
{
	Asteroid *testAsteroid = new Asteroid(5, 20, -5);
	cout << endl;
	testAsteroid -> setSize(2);
	testAsteroid -> setSpeed(7,-19);
	cout << endl;
	delete testAsteroid;
	testAsteroid = NULL;

	cout << endl;
	Asteroid asteroid(3, 20, -5);
	cout << endl;
	asteroid.setSize(5);
	asteroid.setSpeed(-4, 20);
	cout << endl;
	
	cin.get();
	return 0;
}
