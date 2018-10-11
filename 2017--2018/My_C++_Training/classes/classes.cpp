#include <iostream>
using namespace std;

/*
struct DateStruct{
    //the m_ signifies a member variable
    int m_month;
    int m_day;
    int m_year;
};

void print(DateStruct &date){
    cout << date.m_month << "/" << date.m_day << "/" << date.m_year << endl;
}
*/

class DateClass{
    
    public:
        //same as struct
        int m_month;
        int m_day;
        int m_year;
        
        //also member functions (methods)
        void print(){
            cout << m_month << "/" << m_day << "/" << m_year << endl;
        }
        
        //create constructor
        //run when object is run and initialized
        
        DateClass(int month = 1, int day = 1, int year = 2000){
            m_month = month;
            m_day = day;
            m_year = year;
        }
};

int main(){
    /*
    DateStruct today = {12, 4, 2017};
    print(today);
    return 0;
    */
    
    DateClass today;
    
    today.m_month = 12;
    today.m_day = 4;
    today.m_year = 2017;
    
    today.print();
    
    DateClass myBirthday(12, 10, 2001);
    myBirthday.print();
    
}