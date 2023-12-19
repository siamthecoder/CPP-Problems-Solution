#include "linkedlist.h"
#include <iostream>
using namespace std;

template<class L>
linkedList<L>::linkedList() {
    head = NULL;
}

template<class L>
linkedList<L>::~linkedList() {
    head = NULL;
}

template<class L>
void linkedList<L>::insertAtHead(L data) {
    Node<L> *newNode = new Node<L>(data);

    newNode->next = head;
    head = newNode;
}

template<class L>
void linkedList<L>::insertAfterNode(L prependData, L newData) {

    Node<L> *prependNode = head;

    while(prependNode->next != NULL) {
        if(prependNode->data == prependData) {
            Node<L> *newNode = new Node<L>(newData);

            newNode->next = prependNode->next;
            prependNode->next = newNode;

            break;
        }
        prependNode = prependNode->next;
    }

}

template<class L>
void linkedList<L>::insertAtTail(L data) {
    Node<L> *newNode = new Node<L>(data);

    Node<L> *searcher = head;

    while(searcher->next != NULL) {
        searcher = searcher->next;
    }

    searcher->next = newNode;
    newNode->next = NULL;
}

template<class L>
void linkedList<L>::deleteAtHead() {
    Node<L> *bin = head;

    head = bin->next;

    delete bin;
}

template<class L>
void linkedList<L>::deleteANode(L data) {
    Node<L> *prepend = head;

    while(prepend->next->data != data) {
        prepend = prepend->next;
    }

    Node<L> *bin = prepend->next;
    prepend->next = prepend->next->next;

    delete bin;
}

template<class L>
void linkedList<L>::deleteAtTail() {
    Node<L> *bin = head;

    while(bin->next->next != NULL) {
        bin = bin->next;
    }

    delete bin->next;
    bin->next = NULL;
}

template<class L>
void linkedList<L>::displayList() {

    Node<L> *printer = head;

    cout << "[";
    while(printer->next != NULL) {
        cout << printer->data << "->";
        printer = printer->next;
    }

    cout << printer->data << "->";
    cout << "NULL]";
}
