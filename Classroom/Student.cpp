// #ifndef STUDENT_H
// #define STUDENT_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Student.h"


int studentNum = 0;

// constructor
Student::Student(){
    // initialize all variables 
    lastName = " ";
    firstName = " ";
    ssn = " ";
    grades[0] = 0.0;
    grades[1] = 0.0;
    grades[2] = 0.0;
    grades[3] = 0.0;
    average = 0.0;
}

// build setters

Student::Student(string lName, string fName, string social, double score1, double score2, double score3, double score4){

    setlastName(lName); // take in the parameter and pass
    setfirstName(fName);
    setssn(social);
    setGrades(score1, score2, score3, score4);

    // call the calculate average function so the average will be shown
    calcavg();

    studentNum++; // Updating the static variable
}

void Student::setfirstName(string fName){

    firstName = fName; //set to parameter
    
}

void Student::setlastName(string lName){

    lastName = lName; // set to parameter

}

void Student::setssn(string social){

    ssn = social; // set to parameter

}

void Student::setGrades(double grade1, double grade2, double grade3, double grade4){

    // update addresses in array with incoming scores

    grades[0] = grade1;
    grades[1] = grade2;
    grades[2] = grade3;
    grades[3] = grade4;
}

// Create your getters
string Student::getfirstName(){

    return firstName; // return the firstName 

}

string Student::getlastName(){

    return lastName; // return last name

}

string Student::getssn(){

    return ssn; // return social
}

 double* Student::getGrades(){

    return grades; // return array grades

}

double Student::getaverage(){

    return average; // return the calculated average
}

void Student::calcavg(){

    double total = 0.0;

    total = (grades[0] + grades[1] + grades[2] + grades[3]);

    average = total / 4;
    
}

void Student::print() {

    cout << left << setw(15) << lastName
        << setw(15) << firstName
        << setw(15) << ssn
        << right << setw(10) << fixed << setprecision(1) << grades[0]
        << setw(10) << fixed << setprecision(1) << grades[1]
        << setw(10) << fixed << setprecision(1) << grades[2]
        << setw(10) << fixed << setprecision(1) << grades[3]
        << setw(10) << fixed << setprecision(1) << average
        << endl;


}