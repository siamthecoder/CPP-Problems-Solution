#include <iostream>
using namespace std;

int main()
{
    int ara[50], i, j, n, count = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "\nInput Array elements: " << endl;

    for(i = 0; i < n; i++) {
        cin >> ara[i];
    }

    cout << "\nUnique element(s): ";

    for(i = 0; i < n; i++) {
        ara[i];
        count = 0;
        for(j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }
            else if(ara[i] == ara[j]) {
                count ++;
                break;
            }
        }
        if(count == 0) {
            cout << ara[i];
        }
    }

    return 0;
}