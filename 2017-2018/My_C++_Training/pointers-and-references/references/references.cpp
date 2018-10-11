#include <iostream>
using namespace std;

//this is just my awesome printing function
void printVariables(int num, int &referenceToNum){
    cout << "num = " << num << endl;
    cout << "referenceToNum = " << referenceToNum << endl;
    cout << endl;
}

int main(){
    
    //references use &
    /*they do not copy values, just say that 
    the data is stored somewhere and that we have it*/
    /*they can only ever talk about the 
    variable assigned to it in the begining*/
    
    int num = 9;
    //creates a memory address to num
    //alias of the variable it is assigned to
    int &referenceToNum = num;
    //can also be written 
    //int & referenceToNum
    printVariables(num, referenceToNum);
    
    //change value of the reference
    referenceToNum = 5;
    //notice that num was changed
    printVariables(num, referenceToNum);
    
    //change value of the variable
    num = 3;
    //notice that the reference was changed
    printVariables(num, referenceToNum);

    return 0;
}