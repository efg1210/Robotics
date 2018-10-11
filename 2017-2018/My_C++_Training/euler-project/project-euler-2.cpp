#include <iostream>
using namespace std;

int main(){
    
    int first = 1;
    int second = 1;
    int sequence = 0;
    int allAdded = 0;
    
    while (sequence < 11){
        sequence = first + second;
        if(sequence%2 == 0){
            allAdded = allAdded + sequence;
        }
        if(second > first){
            first = sequence;
        } else if (first > second){
            second = sequence;
        }
    }
    
    cout << allAdded << endl;
}