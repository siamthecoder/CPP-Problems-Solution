#include <iostream>
using namespace std;

int main()
{
    int x_plus_y, x_minus_y, x, y;

    cout << "x + y = ";
    cin >> x_plus_y;

    cout << "x - y = ";
    cin >> x_minus_y;

    x = (double)(x_plus_y + x_minus_y) / 2;
    y = x - (x_minus_y);

    cout << "Here," << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}