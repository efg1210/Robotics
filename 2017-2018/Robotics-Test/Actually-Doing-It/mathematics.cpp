#include <iostream>
//#include "mathematics.h"
//my header will not work since I forgot the end
//I commented it out so everything else will work
//I also put the code in the isPrime() here so I can test it
using namespace std;

int primeAgain(int checkNumber){
   
   int checker = 0;
   
   for(int i = 2; checkNumber % i != 0; i++){
       checker++;
   }
   
   if(checker != 0){
       return checkNumber;
   }else{
       return 0;
   }
}

int main(){
    
    int finalNumber = 0;
    int holder = 0;

    for(int j = 1; j < 5; j++){
        holder = primeAgain(j);
        finalNumber = finalNumber + holder;
        cout << finalNumber << endl;

    }
    
    return 0;
}