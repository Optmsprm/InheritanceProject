
#include "Car.h"
#include <iostream>

Car::Car()
{
	numDoors = 0;
}

int Car::getNumDoors()
{
	return numDoors;
}

void Car::setNumDoors(int replace)
{
	numDoors = replace;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Doors: " << getNumDoors() << endl;
}