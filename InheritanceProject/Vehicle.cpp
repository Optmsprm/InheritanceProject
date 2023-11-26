
#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
	manufacturer = "";
	yearBuilt = 0;
}

string Vehicle::getManufacturer() const
{
	return manufacturer;
}

int Vehicle::getYearBuilt() const
{
	return yearBuilt;
}

void Vehicle::setManufacturer(string replace)
{
	manufacturer = replace;
}

void Vehicle::setYearBuilt(int replace)
{
	yearBuilt = replace;
}

void Vehicle::displayInfo()
{
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << getManufacturer();
	cout << "Year Built: " << getYearBuilt();
}