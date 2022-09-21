#include <iostream>
using namespace std;

int main()
{
    int total_runs, matches_played;
    string name;
    double avg;

    cout << "Players name: ";
    getline(cin, name);

    cout << "Total matches played: ";
    cin >> matches_played;

    cout << "Total runs scored: ";
    cin >> total_runs;

    avg = (double)total_runs / (matches_played);

    if(avg >= 30.0) {
        cout << "Avg: " << avg << endl;
        cout << "Yes, " << name << " is a Good Batsman!" << endl;
    }
    else {
        cout << "Avg: " << avg << endl;
        cout << "Only BCB loves " << name << endl;
    }

    return 0;
}