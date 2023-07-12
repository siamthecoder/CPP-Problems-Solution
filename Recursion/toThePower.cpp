#include <iostream>
using namespace std;

int toThePower(int base, int key) {

    if(key != 0) {
        return base * toThePower(base, key - 1);
    }
    else {
        return 1;
    }
}

int main()
{
    int myNoobCalc = toThePower(2, 3);

    cout << myNoobCalc;

    return 0;
}