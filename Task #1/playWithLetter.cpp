#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    char ch, ch_new;

    while(i != 0) {
        cout << "Enter a English letter: ";
        cin >> ch;
        while(!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')) {
            cout << "Enter a English letter: ";
            cin >> ch;
        }

        cout << "Given letter is: " << ch << endl;
        cout << "Which no letter you wants to know after it: ";
        cin >> n;

        ch_new = ch + n;
        cout << "The " << n << "no letter after "
                            << "" << ch
                            << " is: " << ch_new << endl;
        i = 0;
    }

    return 0;
}