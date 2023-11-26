// Alexander Rosencrantz
// CIS 1202 501
// 11/26/2023

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

using namespace std;

int main()
{
    Vehicle userVehicle;
    Car userCar;
    Truck userTruck;
    string tempStr;
    int tempInt;

    cout << "Vehicle Program" << endl << endl;

    cout << "Vehicle: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, tempStr);
    userVehicle.setManufacturer(tempStr);
    while(true)
    {
        cout << "Enter the year built: ";
        cin >> tempInt;
        if (!cin.good() || to_string(tempInt).length() != 4)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Choice" << endl;
        }
        else
        {
            break;
        }
    }
    userVehicle.setYearBuilt(tempInt);
    userVehicle.displayInfo();
}

