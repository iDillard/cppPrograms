#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
    double year;
    double mileage;

    string make;
    string model;
    string color;

public:
    // Getters
    Vehicle(string vMake, string vModel, int vYear, double vMileage);
    int getVehicleYear();
    double getVehicleMileage(); // get the vehicle milage
    string getVehicleMake();    // get vehicle make
    string getVehicleModel();   // get vehicle model
    string getVehicleColor();   // get vehicle color

    // Setters
    void setVehicleMileage(double vMileage); // set mileage
    void setVehicleMake(string vMake);       // set vehicle make
    void setVehicleModel(string vModel);     // set vehicle model
    void setVehicleYear(double vYear);
    void setVehicleColor(string vColor); // set vehicle color

    // Constructor
    Vehicle();
    Vehicle(string vMake, string vModel, string vColor, int vYear, double vMileage);
};
