#pragma once

#ifndef TRUCK
#define TRUCK

#include "Vehicle.h"

class Truck : public Vehicle
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