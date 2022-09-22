#include <iostream>
using namespace std;

int main()
{
    string msg;
    int i, l;

    cout << "Sir, please input your message: ";
    getline(cin, msg);

    l = msg.length();

    for(i = 0; i < l; i++) {
        if(msg[i] >= 'a' && msg[i] <= 'z') {
            msg[i] = (msg[i] + 1);
        }
        else if(msg[i] >= 'A' && msg[i] <= 'Z') {
            msg[i] = (msg[i] + 1);
        }
    }

    cout << "Sir, your encripted version: " << msg << endl;

    return 0;
}