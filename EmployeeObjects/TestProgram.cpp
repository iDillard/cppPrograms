#include "Employee.h"
#include "FulltimeEmployee.h"
#include "ParttimeEmployee.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Create FullTime employee object
    FulltimeEmployee emp1("Marry Davis", "Faculty", "maryd@gmail.com", 60000.00);

    // Create Parttime employee object
    ParttimeEmployee emp2("Tom Fox", "Secretary", "TomF@gmail.com", 20.00, 30);

    // create an array of base class Employee pointers
    Employee* employees[2];

    // assign the adresse of the two employee objects in the array
    // both emp1 and emp2 are also Employee objects
    employees[0] = &emp1; // & points to the address of emp1
    employees[1] = &emp2;

    // implement dynamic binding and polymorphism
    for (int i = 0; i < 2; i++)
    {
        cout << "Employee " << i + 1 << endl;
        employees[i]->displayEmployee();
        cout << endl;
    }
}