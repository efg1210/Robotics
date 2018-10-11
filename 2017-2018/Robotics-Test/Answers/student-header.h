#ifndef STUDENT_HEADER
#define STUDENT_HEADER
#include <iostream>
#include <string>
using namespace std;

class StudentClass{
    string fName;
    string lName;
    string school;
    double gpa;
    bool attendance;
    
    public:
    Student(string first = "Emily", string last = "Granville", string school1 = "AIT", double gpa1 = 999, bool attendance1 = true){
        fName = first;
        lName = last;
        school = school1;
        gpa = gpa1;
        attendance = attendance1;
    }
}

void print(){
    cout << endl;
}

void toggleAttendance(){
    s_attendance = !(s_attendance);
}

void compareStudents(Student, otherStudents){
    
}

#endif