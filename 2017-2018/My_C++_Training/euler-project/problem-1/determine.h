#ifndef DETERMINE_H
#define DETERMINE_H
#include <iostream>

int add(int number){
    double sum = 0;
    for(int i = 0; i < number; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum = sum + i;
        }
    }
    return sum;
}

#endif