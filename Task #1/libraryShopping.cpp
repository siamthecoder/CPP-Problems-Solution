#include <iostream>
using namespace std;

int main()
{
    int i, n_pen, n_pencil, n_notebook;
    int n_novel = 0, n_historical = 0, n_political = 0, n_programming = 0;
    double cost = 0.0;
    char choose, book_type;

    while(1) {
        cout << "Enter how many pen you need: ";
        cin >> n_pen;
        cout << "Enter how many pencil you need: ";
        cin >> n_pencil;
        cout << "Do you need books: Yes(y) or No(n): ";
        cin >> choose;
        
        if(choose == 'y') {
            cout << "Press the buttons for the book types: novel(1)," 
                    " historical(2), political(3)" 
                    " & programming(#): ";
            cin >> book_type;

            if(book_type == '1') {
                cout << "Enter how many Novels you need: ";
                cin >> n_novel;
            }
            else if(book_type == '2') {
                cout << "Enter how many Historical Books you need: ";
                cin >> n_historical;
            } 
            else if(book_type == '3') {
                cout << "Enter how many Political Books you need: ";
                cin >> n_political;
            } 
            else if(book_type == '#') {
                cout << "Enter how many Programming books you need: ";
                cin >> n_programming;
            }    
        }
        else {
            n_novel = n_historical = n_political = n_programming = 0;
        }

        cout << "Enter how many notebook you need: ";
        cin >> n_notebook;

        cost += (n_pen * 5.0) + (n_pencil * 10.0) + (n_novel * 250.0) + (n_historical * 300.0) + (n_political * 180.0) + (n_programming * 450.0) + (n_notebook * 60.0);

        cout << "Enter 0 to exit or 1 to continue: ";
        cin >> i;

        if(i == 0) {
            break;
        }
    }

    cout << "Total cost is: " << cost << endl;

    return 0;
}