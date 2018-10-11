#ifdef MY_MATH_FUNCTIONS
#define MY_MATH_FUNCTIONS

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    
    if(num <=1){
        return false;
    }else if(num == 2){
        return true;
    }
    
    for(int i = 2; i < sqrt(num) + 1; i++){
        if(num % i == 0){
            return false;
        }
    }
    
    return true;
    
}

#endif