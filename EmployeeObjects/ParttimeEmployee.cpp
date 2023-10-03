#include "ParttimeEmployee.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

ParttimeEmployee::ParttimeEmployee(string _name, string _title, string _email, double _wage, double _hours) : Employee(_name, _title, _email)
{
    hourlyWage = _wage;
    hours = _hours;
}

void ParttimeEmployee::setHourlyWage(double _wage)
{
    hourlyWage = _wage;
}

double ParttimeEmployee::getHourlyWage()
{
    return hourlyWage;
}

void ParttimeEmployee::setHours(double _hours)
{
    hours = _hours;
}

double ParttimeEmployee::getHours()
{
    return hours;
}

double ParttimeEmployee::calcGrossPay()
{
    return hours * hourlyWage;
}

void ParttimeEmployee::displayEmployee()
{

    cout << "Parttime Employee" << endl;
    Employee::displayEmployee();
    cout << "Weekly Pay: " << fixed << setprecision(2) << calcGrossPay() << endl;
}