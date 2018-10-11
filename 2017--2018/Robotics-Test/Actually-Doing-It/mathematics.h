#ifndef
#define

int isPrime(int checkNumber){
   
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

#