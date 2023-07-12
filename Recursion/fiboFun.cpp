#include <iostream>
using namespace std;

int fiboFun(int key) {

    if(key == 1) {
        return 1;
    }
    else if(key == 0){
        return 0;
    }
    else {
        return fiboFun(key - 1) + fiboFun(key - 2);
    }
}

int main()
{
    int i;

    for(int i = 0; i < 8; i++) {
        cout << fiboFun(i) << " ";
    }

    return 0;
}