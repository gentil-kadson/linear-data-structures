#include <iostream>
#include "deque.h"
using namespace std;

Deque::Deque() {
    rear = NULL;
    front = NULL;
}

bool Deque::isEmpty() {
    return rear == NULL && front == NULL ? true : false;
}

int Deque::getFront() {
    return front->value;
}

int Deque::getRear() {
    return rear->value;
}

void Deque::insertOnRear(int value) {
    Node *newNode = new Node();
    newNode->value = value;
    
    if (isEmpty()) {
        rear = front = newNode;
        return;        
    }

    newNode->prev = rear;
    newNode->next = NULL;
    rear = newNode;
    return;
}

void Deque::insertOnFront(int value) {
    Node *newNode = new Node();
    newNode->value = value;

    if (isEmpty()) {
        front = rear = newNode;
        return;
    }

    newNode->next = front;
    newNode->prev = NULL;
    front = newNode;
    return;
}

void Deque::removeFromRear() {
    if (isEmpty()) {
        cout << "The Deque is empty." << endl;
        return;
    }

    Node *auxRear = rear;
    rear->next = NULL;
    rear = rear->prev;
    delete auxRear;
    return;
}

void Deque::removeFromFront() {
    if (isEmpty()) {
        cout << "The Deque is empty." << endl;
        return;
    }
    
    Node *auxFront = front;
    front->prev = NULL;
    front = front->next;
    delete auxFront;
    return;
}