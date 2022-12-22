#include <string>
#include <iostream>

using namespace std;

class Classroom
{
public:
    void setClassroomName(string classroomName);
    // classroom name setter

    string getClassroomName();
    // classroom name getter

    void setNoOfStudents(int noOfStudents);
    // setter for number of students

    int getNoOfStudents();
    // getter for number of students

    void setStudentArray(Student[], int numOfStudents);
    // setter for student array

    Student* getStudentArray();
    // getter for student array

    void createStudentArray(string filename);
    // creates array of student objects

    void sortAverage();
    // sorts array of student objects by average score
    
    void sortLastName();
    // sorts array of student objects by last name

    double averageCalc();
    // calculates average score for all students

    void displayInfo();
    // displays last name, first name, 4 exam scores and average score

    Classroom(string classroomName);
    // constructor with 1 parameter

    Classroom();


private:
    string classroomName;
    int noOfStudents;
    Student StudentArray[24];
    double classAverage;
};