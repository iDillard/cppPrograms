#include "FulltimeEmployee.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

FulltimeEmployee::FulltimeEmployee(string _name, string _title, string _email, double _salary) : Employee(_name, _title, _email)
{
    empSalary = _salary;
}

void FulltimeEmployee::setSalary(double _salary)
{
    empSalary = _salary;
}

double FulltimeEmployee::getSalary()
{

    return empSalary;
}

void FulltimeEmployee::displayEmployee()
{
    cout << "Fulltime Employee" << endl;
    Employee::displayEmployee(); // Display Employee class information
    cout << "Salary: " << fixed << setprecision(2) << empSalary << endl;
}