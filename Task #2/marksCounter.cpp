#include <iostream>
using namespace std;

int main()
{
    int i, j, total[16], counter[101];

    cout << "Enter obtained marks of 16 students(50-100): " << endl;

    for(i = 0; i < 16; i++) {
        cout << "student - " << i + 1<< ": ";
        cin >> total[i]; 
    }

    for(i = 50; i < 101; i++) {
        counter[i] = 0;
    }

    for(i = 0; i < 16; i++) {
        counter[total[i]]++;
    }

    cout << "\nSo, the detalis are: " << endl;

    for(i = 49; i < 100; i++) {
        if(counter[i+1] > 0) {
            cout << "Marks: " << i+1
                 << " obtained by: " << counter[i+1]
                 << " student(s)." << endl; 
        }
    } 

    return 0;
}