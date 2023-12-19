#include <iostream>
using namespace std;

template<class L>
class Node
{
public:
    L data;
    Node *next;

    Node(L data) {
        this->data = data;
        this->next = NULL;
    }
};

template<class L>
class linkedList
{
private:
    Node<L> *head;

public:
    linkedList();
    ~linkedList();
    void insertAtHead(L);
    void insertAfterNode(L, L);
    void insertAtTail(L);
    void deleteAtHead();
    void deleteANode(L);
    void deleteAtTail();
    void displayList();
};
