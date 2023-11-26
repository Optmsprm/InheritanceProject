
#include "Truck.h"
#include <iostream>

Truck::Truck()
{
	towingCap = 0;
}

int Truck::getTowingCap()
{
	return towingCap;
}

void Truck::setTowingCap(int replace)
{
	towingCap = replace;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Towing Capacity: " << towingCap;
}