#include <iostream>
using namespace std;

int main()
{
    string car[5]; // declaring a array of string

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name of car " << i + 1 << ": ";
        getline(cin, car[i]);
    }

    cout << "Output" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << car[i] << endl;
    }

    return 0;
}