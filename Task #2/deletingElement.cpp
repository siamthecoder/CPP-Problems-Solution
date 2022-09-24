#include <iostream>
using namespace std;

int main()
{
    int i, n, value, position;
    int ara[50];

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the value to be deleted: ";
    cin >> value;
    cout << "Enter the position where you wants to delete: ";
    cin >> position;

    if(n <= 0 || n > 50) {
        cout << "Invalid size. Try again later" << endl;
    }
    else {
        cout << "Input the elements in the array: " << endl;

        for(i = 0; i < n; i++) {
            cout << "element - " << i+1 << ": ";
            cin >> ara[i];
        }

        for(i = position; i <= n - 1; i++) {
            ara[i-1] = ara[i];
        }
        n--;

        cout << "New Array after deleting: " << endl;
        for(i = 0; i < n; i++) {
            cout << " " << ara[i];
        }
    }

    return 0;
}