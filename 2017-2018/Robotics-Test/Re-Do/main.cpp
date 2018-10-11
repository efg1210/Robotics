#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main(){
    
    Student Aelin = Student("Aelin", "Galathynius", 78930, 9, AIT, 89, false);
    Student Constance = Student("Constance", "Contraire", 85688, 9, AIT, 99, true);
    
    //Student hgg = Student(); //all defaults
    
    //without private you could do this
    //Aelin.firstname = "Aelin";
    
    Aelin.print();
    Constance.print();
    
    Constance.toggleAttendance();
    
    Aelin.compareAgainst(Constance);
    
    return 0;
}