#include <iostream>
using namespace std;

int main()
{
    int i, j = 0, n, m, count = 0, sum = 0;
    int ara[50];
    double avg;

    //finding the desired avg
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Input Array elements: " << endl;;
    for(i = 0; i < n; i++) {
        cin >> ara[i];
    }

    for(i = 0; i < n; i++) {
        if(ara[i] >= 20 && ara[i] <= 80) {
            count++;
            sum += ara[i];
        }
    }

    if(count > 0) {
        avg = (double)sum / count;
        cout << "The averages of numbers in between 20 and 80: "
         << avg << endl;

    }
    else {
        cout << "\nSorry, no element is in between 20 and 80\n" << endl;
    }

    //merging two array
    int ara_two[50], merged_ara[50];

    cout << "\nInput Second Array elements: " << endl;
    for(i = 0; i < n; i++) {
        cin >> ara_two[i];
    }

    m = n + n;

    for(i = 0; i < n; i++) {
        merged_ara[j] = ara[i];
        j++;
    }
    for(i = 0; i < n; i++) {
        merged_ara[j] = ara_two[i];
        j++;
    }

    //printing the merged array
    cout << "\nMerged Array is: ";

    for(i = 0; i < m; i++) {
        cout << " " << merged_ara[i];
    }

    /*sorting merged array in ascending order 
    & finding the second largest*/

    int tmp;

    for(i = 0; i < m; i++) {
        for(j = i + 1; j < m; j++) {
            if(merged_ara[i] > merged_ara[j]) {
                tmp = merged_ara[j];
                merged_ara[j] = merged_ara[i];
                merged_ara[i] = tmp;
            }
        }
    }

    //printing the sorted merged array in ascending order
    cout << "\nSorted Merged Array is: ";

    for(i = 0; i < m; i++) {
        cout << " " << merged_ara[i];
    }

    cout << "\nSo, the second largest element: "
         << merged_ara[m - 2] << endl;
    
    return 0;
}