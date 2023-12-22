#include <iostream>
using namespace std;

int main()
{
    string name;
    int id;
    double cgpa;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter id: ";
    cin >> id;

    cout << "Enter cgpa: ";
    cin >> cgpa;

    cout << "Output" << "\n";

    cout << "ID: " << id << "\n";
    cout << "Name: " << name << "\n";
    cout << "CGPA: " << cgpa << "\n";

    return 0;
}