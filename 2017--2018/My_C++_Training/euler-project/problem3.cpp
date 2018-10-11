#include <iostream>
using namespace std;

class harry{
    public:
    bool isNotPrime(int x){
        for(int i = 1; i < x; i++){
            for(int j = 1; j < x; j++){
                if(i * j == x){
                    return true;
                    cout << "words" << endl;
                }
            }
        }
        return false;
    }
    int addNumbers(){
        int largest = 0;
        for(int y = 1; y < 600851475143; y++){
            if(!isNotPrime(y)){
                if(largest < y){
                    largest = y;
                }
            }
        }
        return largest;
    }
};

int main(){
    harry why;
    int now = why.addNumbers();
    cout << "hey" << endl;
    cout << now << endl;
}