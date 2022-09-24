#include <iostream>
using namespace std;

int main()
{
    char ara[26], ara_consonant[26];
    int i, j = 0, n;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Input characters: " << endl;

    for(i = 0; i < n; i++) {
        cout << "character " << i+1 << ": ";
        cin >> ara[i];
    }

    cout << "\nExisting Vowels are: ";

    for(i = 0; i < n; i++) {
        if(ara[i] == 'a' ||
           ara[i] == 'e' ||
           ara[i] == 'i' ||
           ara[i] == 'o' ||
           ara[i] == 'u') {
            cout << " " << ara[i];
        }
        else if(ara[i] == 'A' ||
                ara[i] == 'E' ||
                ara[i] == 'I' ||
                ara[i] == 'O' ||
                ara[i] == 'U') {
            cout << " " << ara[i];
        }
        else {
            ara_consonant[j] = ara[i];
            j++;
        }
    }

    if(j > 0) {
        cout << "\nExisting Consonants are: ";
        for(i = 0; i < j; i++) {
        cout << " " << ara_consonant[i];
        }
    }

    return 0;
}

