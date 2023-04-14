#include <iomanip>
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

// Constructors

Vehicle::Vehicle()
{
    // Constructor for values not being passed in
    make = ' ';
    model = ' ';
    color = ' ';
    year = 0;
    mileage = 0.0;
}

Vehicle::Vehicle(string vMake, string vModel, int vYear, double vMileage)
{
    // Construction for passed values
    make = vMake;
    model = vModel;
    year = vYear;
    mileage = vMileage;
}

// accessors
int Vehicle::getVehicleYear()
{

    return year; // return the year of the vehicle
}

double Vehicle::getVehicleMileage()
{

    return mileage; // return mileage
}

string Vehicle::getVehicleMake()
{

    return make; // return make
}

string Vehicle::getVehicleColor()
{

    return color; // return color
}
