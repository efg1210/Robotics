#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    double guess = 0;
    srand((unsigned int)time(0));
    double theRandomNumber = rand()%100;
    
    for(int i = 0; i < 7; i++){
        cout << "What is your guess? ";
        cin >> guess;
        if(guess > theRandomNumber){
            cout << "Too high!" << endl;
        }else if(guess < theRandomNumber){
            cout << "Too low!" << endl;
        }else if(guess == theRandomNumber){
            cout << "There you go!" << endl;
            break;
        }
    }
    cout << "The number was " << theRandomNumber << "!" << endl;

    /*
    while(guess != theRandomNumber{
        cout << "What is your guess? ";
        cin >> guess;
        if(guess > theRandomNumber{
            cout << "Too high!" << endl;
        }else if(guess < theRandomNumber{
            cout << "Too low!" << endl;
        }else if(guess == theRandomNumber{
            cout << "There you go!" << endl;
        }
    }
    */
    return 0;
}