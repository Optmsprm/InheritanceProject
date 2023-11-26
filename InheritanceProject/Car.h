#pragma once

#ifndef CAR
#define CAR

#include "Vehicle.h"

class Car : Vehicle
{
private:
	int numDoors;
public:
	Car();
	int getNumDoors();
	void setNumDoors(int);
	void displayInfo();
};

#endif