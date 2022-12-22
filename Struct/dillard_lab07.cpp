// Isaiah Dillard
// 11/10/2022

#include <iomanip>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

struct Student {
    string studentName;
    double midTerm;
    double finalTest;
    double lab1;
    double lab2;
    double lab3;
    double lab4;
    double weightedGrade;
};


double calculateGrade(Student student);


int main(){

    // variable declaration
    Student studentEntity;
    Student students[24];
    int numStudent;
    ifstream inFile;
    char letterGrade=' ';

    // open the file for reading, check whether is the file is there or not.
    inFile.open("students.txt");

    if (!inFile){

        cout << "No File Found!" << endl;
        return 1;
    }
    // read the first student in from file
    getline(inFile, studentEntity.studentName);

    // read file input by line
    inFile >> studentEntity.midTerm >> studentEntity.finalTest;
    inFile >> studentEntity.lab1 >> studentEntity.lab2 >> studentEntity.lab3 >> studentEntity.lab4;
    
    while (inFile){
        // call function to calculate final grade.
        // and update the final records
        studentEntity.weightedGrade = calculateGrade(studentEntity);
        // store the current student record in the students array and update numStudent
        students[numStudent] = studentEntity;
        numStudent++;
        //ignore the '\n' at the end of the current student record
        inFile.ignore(100,'\n');
        // read the next student record
        getline(inFile, studentEntity.studentName);

        inFile >> studentEntity.midTerm >> studentEntity.finalTest;
        inFile >> studentEntity.lab1 >> studentEntity.lab2 >> studentEntity.lab3 >> studentEntity.lab4;

    }

    // close the file
    inFile.close();

    for (int i = 0; i < numStudent; i++){

        // determine each students letter grade.
        if (students[i].weightedGrade >= 90 && students[i].weightedGrade <= 100){

            letterGrade = 'A';
        } else if (students[i].weightedGrade >= 80 && students[i].weightedGrade < 90){

            letterGrade = 'B';
        } else if (students[i].weightedGrade >= 70 && students[i].weightedGrade < 80){

            letterGrade = 'C';
        } else if (students[i].weightedGrade >= 60 && students[i].weightedGrade < 70){

            letterGrade = 'D';
        } else {
            letterGrade = 'F';
        }

        // display each student name, final score, and final grade
        // according to the expected output.

        cout << students[i].studentName << "'s final grade is " << students[i].weightedGrade << "% ( grade: " << letterGrade << ")" << endl;


    }

    return 0;


}

double calculateGrade(Student student){

    double finalGrade = 0.0;
    // calculate and return students final numeric score,
    finalGrade = student.midTerm * 0.25 + student.finalTest * 0.25;

    finalGrade = finalGrade + ((student.lab1 + student.lab2 + student.lab3 + student.lab4) / 4 * 0.5);

    return finalGrade;
};
