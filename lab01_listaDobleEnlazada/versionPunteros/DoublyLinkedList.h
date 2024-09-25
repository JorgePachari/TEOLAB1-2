#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void append(int value);
    void prepend(int value);
    void deleteValue(int value);
    void printForward();
    void printBackward();
    bool isFull();
};

#endif // DOUBLYLINKEDLIST_H

