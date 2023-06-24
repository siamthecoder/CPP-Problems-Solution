#include <iostream>
using namespace std;
#include <string.h>

int main() {

    string bigBrotherFirstName = "Md.";

    string bigBrotherMiddleName = "Selim";

    string bigBrotherLastName = "Hossain";

    string bigBrother = bigBrotherFirstName + " " + bigBrotherMiddleName + " " + bigBrotherLastName;

    cout << bigBrother << endl;

    int size = bigBrother.size();

    cout << "The size of the name is: " << size << endl;

    return 0;
}
