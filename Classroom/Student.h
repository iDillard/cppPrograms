#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string firstName;
        string lastName;
        string ssn;
        double grades[4];
        double average;
    public:
        static int num;
        Student();
        Student(string lastName,string firstName, string ssn, double grade1, double grade2, double grade3, double grade4);
        string getfirstName();
        string getlastName();
        string getssn();
        double* getGrades();
        double getaverage();
        void setfirstName(string arg);
        void setlastName(string arg);
        void setssn(string arg);
        void setGrades(double grade1, double grade2, double grade3, double grade4);
        void print();
        void calcavg();

};