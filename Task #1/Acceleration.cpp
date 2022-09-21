#include <iostream>
using namespace std;

int main()
{
    double a, v;
    int t = 60;

    v = (60.0 * 1000.0) / (3600);

    a = v / t;

    cout << "Velocity is: " << v << endl;
    cout << "Elapsed time is: " << t << endl;
    cout << "So, the acceleration of the car will: " << a << endl;

    return 0;
}
