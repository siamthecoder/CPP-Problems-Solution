#include <iostream>
using namespace std;

int main()
{
    int a, b, sum, subtraction;
    double sumDouble, multiply;

    char operatorButton;

    cout << "Enter the operator: ";
    cin >> operatorButton;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    switch(operatorButton) {
        case '+' : sum = a + b;
                   cout << "Result: " << sum << endl;
                   break;
        case '-' : subtraction = a - b;
                   cout << "Result: " << subtraction << endl;
                   break;
        case '/' : sumDouble = (double)a / b;
                   cout << "Result: " << sumDouble << endl;
                   break;
        case '*' : multiply = a * b;
                   cout << "Result: " << multiply << endl;
                   break;  
        default  : cout << "\nInvalid Input";
    }


    return 0;
}