#include <iostream>
using namespace std;

int main()
{
    int myArray[5];

    myArray[0] = 10;
    myArray[1] = 100;
    myArray[2] = 1000;
    myArray[3] = 100;
    myArray[4] = 10;

    // print

    cout << myArray[0] << endl;
    cout << myArray[1] << endl;
    cout << myArray[2] << endl;
    cout << myArray[3] << endl;
    cout << myArray[4] << endl;

    cout << "After updates"
         << "\n";

    myArray[0] = 20;
    myArray[1] = 10;
    myArray[2] = 100;
    myArray[3] = 10;
    myArray[4] = 20;

    cout << myArray[0] << endl;
    cout << myArray[1] << endl;
    cout << myArray[2] << endl;
    cout << myArray[3] << endl;
    cout << myArray[4] << endl;

    return 0;
}