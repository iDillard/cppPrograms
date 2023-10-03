#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H
#include "Employee.h"
#include <string>

using namespace std;

class ParttimeEmployee : public Employee
{

public:
    // Constructor
    ParttimeEmployee(string _name, string _title, string _email, double _wage, double _hours);

    // setters
    void setHourlyWage(double _wage);
    void setHours(double _hours);

    // getters
    double getHourlyWage();
    double getHours();

    double calcGrossPay();

    void displayEmployee();

private:
    double hourlyWage;
    double hours;
};
#endif
