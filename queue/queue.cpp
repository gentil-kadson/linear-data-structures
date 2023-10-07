#include <iostream>
#include "queue.h"
using namespace std;

Queue::Queue() {
    current = NULL;
}

bool Queue::isEmpty() {
    return current == NULL ? true : false;
}

void Queue::push(int value) {
    Node* newNode = new Node();
    newNode->value = value;

    if (isEmpty()) {
        newNode->next = NULL;
        current = newNode;
        return;
    }

    current->next = newNode;
    newNode->next = NULL;
    return;
}

void Queue::pop() {
    if (isEmpty()) {
        cout << "There are no elements on the queue." << endl;
        return;
    }

    Node *oldCurrent = current;
    current = current->next;
    delete oldCurrent;
    return;
}

void Queue::printQueue() {
    Node *auxCurrent = current;

    while (auxCurrent != NULL) {
        cout << auxCurrent->value << endl;
        auxCurrent = auxCurrent->next;
    }

    return;
}

bool Queue::exists(int value) {
    Node *auxCurrent = current;

    while (auxCurrent != NULL) {
        if (auxCurrent->value == value) {
            return true;
        }

        auxCurrent = auxCurrent->next;
    }

    return false;
}