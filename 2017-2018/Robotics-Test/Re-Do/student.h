#ifndef STUDENT_h
#define STUDENT_h

#include <iostream>
#include <string>
using namespace std;

enum School {
    MHS,
    AIT,
    UCTECH,
    ALLIED,
    APA,
    HOGWARTS
};

class Student {
    private:
    string firstName;
    string lastName;
    int id;
    int grade;
    School school;
    int QPA;
    bool inAttendance;
    public:
    
    Student(string firstName = "John", string lastName = "Doe", int id = 123456, int grade = 9, School school = AIT, int QPA = 100, bool inAttendance = false) : 
        firstName(firstName), 
        lastName(lastName), 
        id(id), 
        grade(grade), 
        school(school), 
        QPA(QPA), 
        inAttendance(inAttendance){
            
        }
        
    void print(){
        cout << "Student(" << firstName << " " << lastName << ")" << endl;
    }
    
    void toggleAttendance(){
        inAttendance = !inAttendance;
    }
    
    void compareAgainst(Student &other){
        cout << firstName << " has a QPA of " << QPA << "\% and " << other.firstName << " has a QPA of " << other.QPA << "\%. " << flush;

        if(other.QPA > QPA){
            cout << other.firstName << " is a better student." << endl;
        }else if(other.QPA < QPA){
            cout << firstName << " is a better student." << endl;
        }else{
            cout << "They are equal students." << endl;
        }
    }
};

#endif