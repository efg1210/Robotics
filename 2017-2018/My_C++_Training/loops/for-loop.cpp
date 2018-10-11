#include <iostream>
using namespace std;

int main()
{
    int aNumber = 0;
    
    for (int i = 0; i < 1001; i++) {
        cout << aNumber << endl;
        aNumber = aNumber + 1;
    }
    
    return 0;
}