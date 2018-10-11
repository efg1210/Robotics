#include <iostream>
using namespace std;

int round (double d){
    return (int) d + 0.5;
}

int main () {
    // Cast to ints?
    double d = 4.5;
    int num = (int) d; // Converts d into an integer number
    cout << "d = " << d << endl;
    cout << "num = " << num  << "\n" << (int) 'a' << endl;
    
    return 0;
}