#include <iostream>
using namespace std;

int main()
{
    string name;
    int id;
    double cgpa;

    cout << "\nEnter your ID: ";
    cin >> id;
    fflush(stdin);

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "\nName: " << name
         << "\nID: " << id
         << "\nCGPA: " << cgpa
         << endl;


    return 0;
}