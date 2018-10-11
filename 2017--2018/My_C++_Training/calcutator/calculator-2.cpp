
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double num1;
    double num2;
    char operation;
    
    cout << "What is the first number? ";
    cin >> num1;
    cout << "What is the operation? ";
    cin >> operation;
    cout << "What is the last number? ";
    cin >> num2;
    
    switch(operation)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
        //goes down to the next line if it doesn't have break
        case 'x':
            cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Try Again" << endl;
            break;
    }
    

    return 0;
}