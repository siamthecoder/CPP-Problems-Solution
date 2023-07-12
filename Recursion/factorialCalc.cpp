#include <iostream>
using namespace std;

int fiboFun(int key) {

    if(key > 1) {
        return key * fiboFun(key - 1);
    }
    else {
        return 1;
    }
}

int main()
{
    int myBox = fiboFun(3);

    cout << myBox;

    return 0;
}