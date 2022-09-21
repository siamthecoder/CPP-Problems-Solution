#include <iostream>
using namespace std;

int main()
{
    int m, y, w;
    char ch;

    cout << "Choose age in month(m) or year(y): ";
    cin >> ch;

    if(ch == 'm') {
        cout << "Now enter the age in month: ";
        cin >> m;

        y = (double)m / 12;
        w = (double)(m * 30) / 7;

        if(w >= 0 && w < 4) {
            cout << "Newborn" << endl;
        }
        else if(w >= 4 && m == 1) {
            cout << "Infant" << endl;
        }
        else if(m >= 12 && m < 24) {
            cout << "Toddler" << endl;
        }
        else if(y >= 2 && y <= 5) {
            cout << "Preschooler" << endl;
        }
        else if(y >= 6 && y <= 13) {
            cout << "School-aged child" << endl;
        }
        else if(y >= 14 && y <= 19) {
            cout << "Adolescent" << endl;
        }
    }
    else if(ch == 'y') {
        cout << "Now enter the age in year: ";
        cin >> y;

        m = y * 12;
        w = (double)(m * 30) / 7;

        if(w >= 0 && w < 4) {
            cout << "Newborn" << endl;
        }
        else if(w >= 4 && m == 1) {
            cout << "Infant" << endl;
        }
        else if(m >= 12 && m < 24) {
            cout << "Toddler" << endl;
        }
        else if(y >= 2 && y <= 5) {
            cout << "Preschooler" << endl;
        }
        else if(y >= 6 && y <= 13) {
            cout << "School-aged child" << endl;
        }
        else if(y >= 14 && y <= 19) {
            cout << "Adolescent" << endl;
        }
    }

    return 0;
}