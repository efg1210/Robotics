#ifndef HEADER
#define HEADER

#include <iostream>
using namespace std;

bool findPrime(int number){
    if(number == 2 || number == 3 || number == 5){
        return true;
    }else if(number <= 1){
        return false;
    }else{
        int counter = 0;
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                counter++;
            }
        }
        if(counter == 0){
            return true;
        }else{
            return false;
        }
    }
}

void printPrime(int howMany){
    int sum = 0;
    int counter9 = 0;
    // for(int i = 1; i < max; i++){
    //     if(findPrime(i)){
    //         sum += i;
    //         cout << i << endl;
    //     }
    // }
    
    for(int testNum = 0; counter9 < howMany; testNum++){
        if(findPrime(testNum)){
            sum += testNum;
            counter9++;
        }
    }
    
    cout << sum << endl;
}

#endif

/*
 87mgvb3ewhyuol98iv kmdxf trg67yu8i90;-''
 cvgfbhnjbgvfb nmb hmnjhbgvhgvb
*/