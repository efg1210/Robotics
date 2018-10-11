#include <iostream>
using namespace std;

int main(){
    
    //& GIVES YOU THE ADDRESS OF THE VARIABLE
    //* TELLS WHAT IS IN THE ADDRESS OF THE THING
    //* OR DEFINES IT AS A POINTER
    
    
    
    //First part!
    int num = 4;
    
    //declare a pointer
    int *pointerToNum = &num;
    
    cout << num << endl; //prints 4
    //these two should be the same!
    cout << &num << endl; //prints address of num
    cout<< pointerToNum << endl; //prints address of num
    
    num++;
    cout << pointerToNum << endl; 
    //this is the same, because the thing in the address 
    //is different, not the address (as if a new person moved in)
    
    
    
    //Second part! (does not work so!)
    char letter = 'B';
    
    //new pointer
    char *ptrToLetter = &letter;
    
    cout << letter << endl;
    cout << ptrToLetter << endl;
    
    
    
    //Third part!
    short smallNum = 4;
    
    //new pointer
    //this * shows that you are going to be using a pointer for this
    short *ptrToSmallNum = &smallNum;
    
    cout << smallNum << endl;
    //this * shows that you are selecting what is in the address
    cout << *ptrToSmallNum << endl;
    
    //IMPORTANT
    *ptrToSmallNum = 100;
    //THE VARIABLE, *NOT THE POINTER* IS NOW CHANGED TO 100
    
    
    
    //Fourth part!
    int testGrades[] = {80, 40, 100};
    //arrays are just poiners to different data
    cout << testGrades << endl;
    //that shows an address for the FIRST VALUE in the array
    cout << *testGrades << endl;
    
    //pointer math
    cout << testGrades + 1 << endl;
    //it shows the address plus 4, because ints are 64 bits
    
    cout << (testGrades + 1) << endl; //prints out address of the second one
    cout << *(testGrades + 1) << endl; //print out actual thing in the array
    
    //just what it returns
    return 0;
}