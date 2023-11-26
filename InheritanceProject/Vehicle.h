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
	void setManufacturer(string);
	void setYearBuilt(int);
	void displayInfo();
};

#endif