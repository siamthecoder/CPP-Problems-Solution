#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers here: ";
    scanf("%d%d%d", &a, &b, &c);

    for(int i = a; i <= c; i++) {
        for(int j = a; j <= c; j++) {
            for(int k = a; k <= c; k++) {
                if(j != i && k != i && k != j) {
                    cout << " "
                         << i
                         << " "
                         << j
                         << " "
                         << k << endl;
                }
            }
        }
    }

    return 0;
}