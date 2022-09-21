#include <iostream>
using namespace std;

int main()
{
    int i, j, m = 0;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            m += i;
            cout << "" << i
                 << " * "
                 << "" << j
                 << " = "
                 << "" << m << endl;
        }
        cout << "\n\n"
             << endl;
        m = 0;
    }

    return 0;
}