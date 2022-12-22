#include <iostream>
#include <iomanip>
#include <string>

// import class files
#include "Student.h"
#include "Classroom.h"

int main(){

    Classroom classroomOne("CSC134");

    classroomOne.createStudentArray("studentInfo.txt");
    classroomOne.displayInfo();
    classroomOne.sortAverage();
    classroomOne.sortLastName();

    cout << endl;
    cout << "Total students in this class: " << classroomOne.getNoOfStudents() << endl;
    cout << endl;
    cout << "The average score of all student: " << classroomOne.averageCalc() << endl;


    return 0;
}