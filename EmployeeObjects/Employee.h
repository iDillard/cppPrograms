#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
public:
    // constuctors
    Employee(); // null constructor
    Employee(string _name, string _title, string _email);

    // setters
    void setEmpName(string _name);
    void setEmpTitle(string _title);
    void setEmpEmail(string _email);

    // getters
    string getEmpName();
    string getEmpTitle();
    string getEmpEmail();

    virtual void displayEmployee();

private:
    string empName;
    string empTitle;
    string empEmail;
};

#endif
