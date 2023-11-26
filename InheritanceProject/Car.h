#pragma once

#ifndef CAR
#define CAR

#include "Vehicle.cpp"

class Car : Vehicle
{
private:
	int numDoors;
public:
	Car();
	int getNumDoors();
	void setNumDoors(int replace);
	void displayInfo();
};

#endif