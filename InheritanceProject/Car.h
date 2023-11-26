#pragma once

#ifndef CAR
#define CAR

class Car
{
private:
	int numDoors;
public:
	Car();
	int getNumDoors();
	int setNumDoors(int replace);
	void displayInfo();
};

#endif