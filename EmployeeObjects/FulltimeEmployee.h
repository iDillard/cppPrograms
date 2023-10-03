#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H
#include "Employee.h"
#include <string>

using namespace std;

class FulltimeEmployee : public Employee
{

public:
    // constructor
    FulltimeEmployee(string _name, string _title, string _email, double _salary);

    void setSalary(double _salary);
    double getSalary();

    void displayEmployee();

private:
    double empSalary;
};

#endif