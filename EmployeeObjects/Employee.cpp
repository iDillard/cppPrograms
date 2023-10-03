#include "Employee.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Employee::Employee()
{

    empName = ' ';
    empTitle = ' ';
    empEmail = ' ';
}

Employee::Employee(string _name, string _title, string _email)
{
    empName = _name;
    empTitle = _title;
    empEmail = _email;
}

void Employee::setEmpName(string _name)
{
    empName = _name;
}

void Employee::setEmpTitle(string _title)
{

    empTitle = ' ';
}

void Employee::setEmpEmail(string _email)
{

    empEmail = _email;
}

string Employee::getEmpName()
{
    return empName;
}

string Employee::getEmpTitle()
{

    return empTitle;
}

string Employee::getEmpEmail()
{
    return empEmail;
}

void Employee::displayEmployee()
{
    cout << "Name: " << empName << endl;
    cout << "Title: " << empTitle << endl;
    cout << "Email: " << empEmail << endl;
}