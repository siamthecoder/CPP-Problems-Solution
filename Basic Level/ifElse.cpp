#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n % 4 == 0 && n % 100 != 0) {
        cout << "Leap year" << endl;
    }
    else if(n % 100 == 0 && n % 400 == 0) {
        cout << "Leap year" << endl;
    }
    else {
        cout << "Not leap year" << endl;
    }

    return 0;
}