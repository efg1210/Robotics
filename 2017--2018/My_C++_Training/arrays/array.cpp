#include <iostream>
using namespace std;


void printArrayLength(int array[], unsigned int size){
    for(int i = 0; i > size; i++){
        cout << array[i] << endl;
    }
    cout << "why" << endl;
}

int main(){
    int numbers[11];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;
    numbers[5] = 6;
    numbers[6] = 7;
    numbers[7] = 8;
    numbers[8] = 9;
    numbers[9] = 10;
    numbers[10] = 11;
    
    printArrayLength(numbers, 11);
    
    return 0;
}