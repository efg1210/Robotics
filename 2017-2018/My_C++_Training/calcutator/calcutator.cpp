#include <iostream>
#include <string>
using namespace std;

int main()
{
    double firstNumber;
    double secondNumber;
    char operation;
    double result;
    
    cout << "What is the first number? ";
    cin >> firstNumber;
    cout << "What is the operation? ";
    cin >> operation;
    cout << "What is the last number? ";
    cin >> secondNumber;
    
    if (operation == '+')
    {
        result = firstNumber + secondNumber;
    }
    else if (operation == '-')
    {
        result = firstNumber - secondNumber;
        cout << result << endl;
    }
    else if (operation == '*' || operation =='x')
    {
        result = firstNumber * secondNumber;
        cout << result << endl;
    }
    else if (secondNumber == "0"){
        
    }
    else if (operation == '/')
    {
        result = firstNumber / secondNumber;
        cout << result << endl;
    }
    else
    {
        cout << "Try Again" << endl;
    }

    //cout << result << endl;
    return 0;
}