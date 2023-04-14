#include <iomanip>
#include <iostream>
#include <string>
#include "Vehicles.h"

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

Vehicle::Vehicle(string vMake, string vModel, string vColor, int vYear, double vMileage)
{
    // Construction for passed values
    setVehicleMake(vMake);
    setVehicleModel(vModel);
    setVehicleYear(vYear);
    setVehicleColor(vColor);
}

// setters

void Vehicle::setVehicleMileage(double vMilaege)
{

    mileage = vMilaege;
}

void Vehicle::setVehicleMake(string vMake)
{

    make = vMake;
}

void Vehicle::setVehicleModel(string vModel)
{

    model = vModel;
}

void Vehicle::setVehicleYear(double vYear)
{

    year = vYear;
}

void Vehicle::setVehicleColor(string vColor)
{

    color = vColor;
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

