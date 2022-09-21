#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j;

    cout << "Enter a number n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "Enter a number of double digit: ";
        cin >> m;

        while ((double)m / 10 < 1.0)
        {
            cout << "Invalid Input" << endl;
            cout << "Enter a number of double digit: ";
            cin >> m;
        }

        cout << "The numbers are: ";

        for (j = m; j <= 90; j++)
        {
            if (j % 11 == 0)
            {
                continue;
            }

            cout << " " << j;
        }

        cout << "\n";
    }

    return 0;
}