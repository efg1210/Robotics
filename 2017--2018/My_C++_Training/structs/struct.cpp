#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

struct RBG{
    int red;
    int green;
    int blue;
};

struct Student{
    string firstName;
    string lastName;
    int grade;
    double gpa;
};

void determineLowerCase(char firstLetter){
    
    switch(firstLetter){
        case "A":
            holder = "a";
            break;
        case "B":
            holder = "b";
            break;
        case "C":
            holder = "c";
            break;
        case "D":
            holder = "d";
            break;
        case "E":
            holder = "e";
            break;
        case "F":
            holder = "f";
            break;
        case "G":
            holder = "g";
            break;
        case "H":
            holder = "h";
            break;
        case "I":
            holder = "i";
            break;
        case "J":
            holder = "j";
            break;
        case "K":
            holder = "k";
            break;
        case "L":
            holder = "l";
            break;
        case "M":
            holder = "m";
            break;
        case "N":
            holder = "n";
            break;
        case "O":
            holder = "o";
            break;
        case "P":
            holder = "p";
            break;
        case "Q":
            holder = "q";
            break;
        case "R":
            holder = "r";
            break;
        case "S":
            holder = "s";
            break;
        case "T":
            holder = "t";
            break;
        case "U":
            holder = "u";
            break;
        case "V":
            holder = "v";
            break;
        case "W":
            holder = "w";
            break;
        case "X":
            holder = "x";
            break;
        case "Y":
            holder = "y";
            break;
        case "Z":
            holder = "z";
            break;
        default:
            cout << "Thou art an idiot" << endl;
    }
}

void printEmail(char first, string last){
    
    determineLowerCase(first);
    determineLowerCase(last);
    
    string email;
    cout << "The email is " << email << endl;
}

int main(){
    
    //this is bad
    /*
    int r = 0;
    int g = 0;
    int b = 0;
    */
    
    //this is better
    //this defines a RGB struct named "yellow"
    /*
    RBG orange;
    yellow.red = 255;
    yellow.green = 255;
    */
    Student okayishStudent = {"Michael", "Moore", 200, 0.45};
    
    printEmail(Student.firstName, Student.lastName);
    
    return 0;
}