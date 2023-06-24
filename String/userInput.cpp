#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string myName;

    cout << "What's your name Bro?:- ";

    getline(cin, myName);

    cout << myName << endl;

    return 0;
}