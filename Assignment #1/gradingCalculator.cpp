#include <iostream>
using namespace std;

int main()
{
    double marks;

    cout << "\nEnter the total marks percentage out of 100%: ";
    cin >> marks;

    if(marks < 60.0) {
        cout << "\nF" << endl;
    }
    else if(marks >= 60.0 && marks <= 66.0) {
        cout << "\nD" << endl;
    }
    else if(marks >= 67.0  && marks <= 69.0) {
        cout << "\nD+" << endl;
    }
    else if(marks >= 70.0 && marks <= 72.0) {
        cout << "\nC-" << endl;
    }
    else if(marks >= 73.0 && marks <= 76.0) {
        cout << "\nC" << endl;
    }
    else if(marks >= 77.0 && marks <= 79.0) {
        cout << "\nC+" << endl;
    }
    else if(marks >= 80.0 && marks <= 82.0) {
        cout << "\nB-" << endl;
    }
    else if(marks >= 83.0 && marks <= 86.0) {
        cout << "\nB" << endl;
    }
    else if(marks >= 87.0 && marks <= 89.0) {
        cout << "\nB+" << endl;
    }
    else if(marks >= 90.0 && marks <= 92.0) {
        cout << "\nA-" << endl;
    }
    else if(marks >= 93.0 && marks <= 100.0){
        cout << "\nA" << endl;
    }


    return 0;
}