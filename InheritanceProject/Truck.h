#pragma once

#ifndef TRUCK
#define TRUCK

#include "Vehicle.cpp"

class Truck : Vehicle
{
private:
	int towingCap;
public:
	Truck();
	int getTowingCap();
	void setTowingCap(int);
	void displayInfo();
};

#endif