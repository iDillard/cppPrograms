#include <iostream>
#include <fstream>
#include <iomanip>
#include "Student.h"
#include "Classroom.h"

using namespace std;

// constructor
Classroom::Classroom() {
    classroomName = " ";
    noOfStudents = 0;
    classAverage = 0.0;
}

Classroom::Classroom(string _classroomName)
{
    classroomName = _classroomName;

}


// setter method for class name
void Classroom::setClassroomName(string cname) {
    classroomName = cname;
}

// setter method for number of students
void Classroom::setNoOfStudents(int n) {
    noOfStudents = n;
}


// getter method for class name
string Classroom::getClassroomName() {
    return classroomName;
}

// getter method for number of students
int Classroom::getNoOfStudents() {
    return noOfStudents;
}

// method to fill StudentArray array
void Classroom::setStudentArray(Student students[], int _noOfStudents) {
    for (int i = 0; i < _noOfStudents; i++)
        StudentArray[i] = students[i];
}

// getter for students array
Student* Classroom::getStudentArray() {
    return StudentArray;
}

// method to read given text file and fill StudentArray
void Classroom::createStudentArray(string filename) {
    ifstream infile;

    // open file
    infile.open(filename);

    // check if file is successfully opened
    if (!infile.is_open()) {
        cout << "'" << filename << "'" << " file not found !!!" << endl;
        exit(1);
    }

    int i = 0;
    string fname, lname, ssn;
    double score[4];

    infile >> fname >> lname >> ssn >> score[0] >> score[1] >> score[2] >> score[3];
    // read line of file
    while (infile) {
        // read data
        
        Student stud(fname, lname, ssn, score[0], score[1], score[2], score[3]);
        StudentArray[i] = stud;
        i++;
        infile >> fname >> lname >> ssn >> score[0] >> score[1] >> score[2] >> score[3];
    }

    // set number of students
    noOfStudents = i;

    infile.close();
}

// method to sort students data by their average score
void Classroom::sortAverage() {
    int min_idx;
    Student temp;

    // print header
    cout << endl;
    cout << "Sort students by average" << endl;
    cout << left << setw(15) << "Last Name"
        << left << setw(15) << "First Name"
        << left << setw(15) << "SSN"
        << right << setw(10) << "Score1"
        << right << setw(10) << "Score2"
        << right << setw(10) << "Score3"
        << right << setw(10) << "Score4"
        << right << setw(10) << "Average" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;


    // apply selection sort algorithm
    for(int i = 0; i < noOfStudents; i++){
        for(int j = i + 1; j < noOfStudents; j++){

            if(StudentArray[i].getaverage() > StudentArray[j].getaverage()){

                temp = StudentArray[i];
                StudentArray[i] = StudentArray[j];
                StudentArray[j] = temp;
            }
        }
    }

    // print the array
    for(int i = 0; i < noOfStudents; i++){
        StudentArray[i].print(); 
    }
    
}

// method to sort students data by their last name
void Classroom::sortLastName() {
    int min_idx;
    Student temp;

    // print header
    cout << endl;
    cout << "Sort students by Last Name" << endl;
    cout << left << setw(15) << "Last Name"
        << left << setw(15) << "First Name"
        << left << setw(15) << "SSN"
        << right << setw(10) << "Score1"
        << right << setw(10) << "Score2"
        << right << setw(10) << "Score3"
        << right << setw(10) << "Score4"
        << right << setw(10) << "Average" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;

    // apply selection sort algorith

    for(int i = 0; i < noOfStudents; i++){
        for(int j = i + 1; j < noOfStudents; j++){

            if(StudentArray[i].getlastName() > StudentArray[j].getlastName()){

                temp = StudentArray[i]; 
                StudentArray[i] = StudentArray[j];
                StudentArray[j] = temp;
            }
        }
    }

    for(int i = 0; i < noOfStudents; i++){
        StudentArray[i].print(); 
    }
}

// method to get class average score
double Classroom::averageCalc() {
    double avg = 0;

    for (int i = 0; i < noOfStudents; i++) {
        // add average average scores
        avg += StudentArray[i].getaverage();
    }
    // compute average and return
    return avg / noOfStudents;
}

// method to print all students details
void Classroom::displayInfo() {
    // print header
    cout << left << setw(15) << "Last Name"
        << left << setw(15) << "First Name"
        << left << setw(15) << "SSN"
        << right << setw(10) << "Score1"
        << right << setw(10) << "Score2"
        << right << setw(10) << "Score3"
        << right << setw(10) << "Score4"
        << right << setw(10) << "Average" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < noOfStudents; i++) {
        StudentArray[i].print(); // print the ith student data
    }
}