#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
using std::string;

class Vehicle
{

public:
    // Getters
    Vehicle(string vMake, string vModel, int vYear, double vMileage);

    int getVehicleYear();

    double getVehicleMileage(); // get the vehicle milage

    string getVehicleMake(); // get vehicle make

    string getVehicleModel(); // get vehicle model

    string getVehicleColor(); // get vehicle color

    // Setters
    void setVehicleMileage(); // set mileage

    void setVehicleMake(); // set vehicle make

    void setVehicleModel(); // set vehicle model

    void setVehicleColor(); // set vehicle color

    // Constructor
    Vehicle();

    // Constructor with parameters.
    Vehicle(string vMake, string vModel, int vYear, double vMileage);

private:
    double year;
    double mileage;

    string make;
    string model;
    string color;
};
