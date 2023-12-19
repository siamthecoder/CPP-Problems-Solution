#include <iostream>
#include "linkedlist.cpp"
using namespace std;

int main()
{
    linkedList<int> rdpList;

    rdpList.insertAtHead(4);
    rdpList.insertAtTail(3);
    rdpList.insertAtTail(6);

    rdpList.displayList();

    rdpList.insertAfterNode(4, 5);

    cout << "\n";
    rdpList.displayList();

    rdpList.insertAtTail(2);
    rdpList.insertAtTail(1);

    cout << "\n";
    rdpList.displayList();

    rdpList.insertAtTail(9);
    rdpList.insertAtTail(10);

    cout << "\n";
    rdpList.displayList();

    rdpList.deleteAtHead();
    rdpList.deleteAtHead();

    cout << "\n";
    rdpList.displayList();

    rdpList.deleteAtTail();

    cout << "\n";
    rdpList.displayList();

    rdpList.deleteANode(6);

    cout << "\n";
    rdpList.displayList();

    return 0;
}
