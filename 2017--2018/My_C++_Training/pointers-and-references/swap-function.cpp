#include <iostream>
using namespace std;

void swapMine(int *numberOne, int *numberTwo){
    
    cout << "The first number was " << numberOne << ", and the second number was " << numberTwo << "." << endl;
    
    int holder;
    
    holder = *numberOne;
    *numberOne = *numberTwo;
    *numberTwo = holder;
    
    cout << "Now the first number is " << numberOne << ", and the second number is now " << numberTwo << "." << endl;
    cout << endl;
}

int main(){
    
    int one;
    int two;
    
    cout << "What will the first number be? ";
    cin >> one;
    cout << "What will the second number be? ";
    cin >> two;
    
    swapMine(&one, &two);

    return 0;
}