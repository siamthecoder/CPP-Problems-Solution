#include <iostream>
using namespace std;

int main()
{
    double a1, a2, b1, b2, c1, c2, d, x, y;

    cout << "a1 = ";
    cin >> a1;

    cout << "b1 = ";
    cin >> b1;

    cout << "a2 = ";
    cin >> a2;

    cout << "b2 = ";
    cin >> b2;

    cout << "c1 = ";
    cin >> c1;

    cout << "c2 = ";
    cin >> c2;

    d = (a1 * b2) - (a2 * b1);

    if(d == 0) {
        cout << "This expression is not valid" << endl;
    }
    else {
        x = ((b2 * c1) - (b1 * c2)) / d;
        y = ((a1 * c2) - (a2 * c1)) / d;

        cout << "Here," << endl;

        cout << "x = " << x << endl;
        cout << "y = " << y << endl;

        cout << "So, the full expression: " << endl;
        cout << "" << a1 << "x" 
             << "+"
             << "" << b1 << "y" 
             << "="
             << "" << c1 << endl;
        
        cout << "" << a2 << "x"
             << "+"
             << "" << b2 << "y"
             << "="
             << "" << c2 << endl;
    }

    return 0;
}