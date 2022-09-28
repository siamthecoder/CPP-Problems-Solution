#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y, tmp;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    x = a;
    y = b;

    //now swappping
    tmp = a;
    a = b;
    b = tmp;

    cout << "\nBefore swapping: " << endl;

    cout << "a: " << x << endl;
    cout << "b: " << y << endl;

    cout << "\nAfter swapping: " << endl;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}