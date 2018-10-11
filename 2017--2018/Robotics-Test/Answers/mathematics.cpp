#include "mathematics.h"
#include <iostream>

using namespace std;

int main(){
    
    int sumOfPrimes = 0;
    int numberOfPrimes = 0;
    
    for(int testNum = 2; numberOfPrimes < 3000; testNum++){
        
        if(isPrime(testNum)){
            sumOfPrimes += testNum;
            numberOfPrimes++;
        }
        
    }
    
    cout << sumOfPrimes << endl;
    return 0;
}