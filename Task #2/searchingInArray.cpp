#include <iostream>
using namespace std;

int main()
{
    int ara[50], n, i, j, element, count = 0, found = 0, occurence;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array elements: " << endl;

    for(i = 0; i < n; i++) {
        cout << "element: " << i + 1 << ": ";
        cin >> ara[i];
    }

    cout << "Enter an element you want to search: ";
    cin >> element;

    for(i = 0; i < n; i++) {
        if(ara[i] == element) {
            count++;
            if(count == 1) {
                cout << "Enter the frequency of this element: ";
                cin >> occurence;
            }
            if(occurence == count) {
                found++;
                cout << "" << element
                     << " occurs " << occurence
                     << " times at " << i + 1
                     << endl;
                break;
            }
        }
    }

    if(count == 0) {
        cout << "Your given element is not exist in the array." << endl;
    }
    else if(found == 0) {
        cout << "" << element
             << " doesn't exist " << occurence
             << " times in the array."
             << endl;
    }

    return 0;
}