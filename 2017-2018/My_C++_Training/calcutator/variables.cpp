#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your height rounded to feet?  ";
    int height;
    cin >> height;
    
    if (height > 6)
    {
        cout << "Wow, you are tall!" << endl;
    }
    else 
    {
        cout << "Wow, you are " << height << " feet tall." << endl;    
    }
    return 0;
}