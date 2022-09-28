#include <iostream>
using namespace std;

int main()
{
    double radius, area, circumference;
    double const PI = 3.1416;

    cout << "Enter the radius: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "\nArea of this Circle: " << area
         << "\nCircumference of this Circle: " << circumference
         << endl;

    return 0;
}