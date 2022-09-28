#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num > 0) {
        cout << "Given number is Positive" << endl;
    }
    else if(num < 0) {
        cout << "Given number is Negative." << endl;
    }
    else {
        cout << "This is ZERO." << endl;
    } 

    return 0;
}