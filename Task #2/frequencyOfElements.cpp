#include <iostream>
using namespace std;

int main()
{
    int n, i, j, count, ara[50];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Input the elements in the array: " << endl;

    for(i = 0; i < n; i++) {
        cout << "element - " << i+1 << ": ";
        cin >> ara[i];
    }

    for(i = 0; i < n; i++) {
        ara[i];
        count = 0;
        for(j = 0; j < n; j++) {
            if(ara[i] == ara[j]) {
                count++;
            }
        }
        cout << "" << ara[i] 
             << " occurs: " << count
             << "times." << endl;
    }

    return 0;
}