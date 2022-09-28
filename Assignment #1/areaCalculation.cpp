#include <iostream>
using namespace std;

int main()
{
    double area, perimeter;
    double height, base, sideA, sideB, sideC;

    cout << "Enter the height of Triangle: ";
    cin >> height;
    cout << "Enter the side 1: ";
    cin >> sideA;
    cout << "Enter the side 2: ";
    cin >> sideB;
    cout << "Enter the side 3: ";
    cin >> sideC;

    base = sideB;

    cout << "Base: " << base;

    area = (1.0 / 2) * base * height;
    perimeter = sideA + sideB + sideC;

    cout << "\nArea of this Triangle: " << area
         << "\nPerimeter of this Triangle: " << perimeter
         << endl;

    return 0;
}