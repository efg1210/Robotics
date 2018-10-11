
//look Melissa, I did it without cheating!

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void assignRandomVals(vector<int> &array, int size){
    int randNum;
    for(int i = 0; i < size; i++){
        //define the random value
        randNum = rand();
        //append it to the end of the array
        array.push_back(randNum);
    }
}

void printArray(vector<int> &array){
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << endl;
    }
    cout << array[array.size() - 1];
}

int main(){

    srand(10);
    
    vector<int> largeArray;
    
    assignRandomVals(largeArray, 10);
    printArray(largeArray);
    
    return 0;
}