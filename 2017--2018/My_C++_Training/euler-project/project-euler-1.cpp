#include <iostream>
using namespace std;

int main(){
    
    int num = 0;
    int total = 0;
    
    while (num < 1001) {
        if (((num % 3) == 0) || ((num % 5) == 0)) {
            total = total + num;
        }
        num++;
    }
    
    cout << total << endl;
    
    return 0;
}