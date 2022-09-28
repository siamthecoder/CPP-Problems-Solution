#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0 && num != 0) {
        cout << "This is Even." << endl;
    }
    else if(num % 2 != 0 && num != 0) {
        cout << "This is NOT Even." << endl;
    }
    else {
        cout << "This is Zero." << endl;
    } 

    return 0;
}