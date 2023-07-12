#include <iostream>
using namespace std;

int sum(int key) {

    if(key > 0) {
        return key + sum(key - 1);
    }
    else {
        return 0;
    }
}

int main()
{
    int myBox = sum(5);

    cout << myBox;

    return 0;
}