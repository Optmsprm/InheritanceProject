#pragma once

#include <string>
using namespace std;

#ifndef VEHICLE
#define VEHICLE

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle();
	string getManufacturer() const;
	int getYearBuilt() const;
	void setManufacturer(string replace);
	void setYearBuilt(int replace);
	void displayInfo();
};

#endif