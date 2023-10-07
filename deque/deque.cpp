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

void Deque::getFront() {
    if (front == NULL) {
        cout << "There are no elements in the front." << endl;
        return;
    }

    cout << front->value << endl;
    return;
}

void Deque::getRear() {
    if (rear == NULL) {
        cout << "There are no elements on the rear." << endl;
        return;
    }

    cout << rear->value << endl;
    return;
}

void Deque::insertOnRear(int value) {
    Node *newNode = new Node();
    newNode->value = value;
    
    if (isEmpty()) {
        rear = front = newNode;
        return;        
    }

    rear->next = newNode;
    newNode->prev = rear;
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

    front->next = newNode;
    newNode->prev = front;
    front = newNode;
    return;
}

void Deque::removeFromRear() {
    if (isEmpty()) {
        cout << "The Deque is empty." << endl;
        return;
    }

    if (rear == front) {
        front = NULL;
        rear = NULL;
        return;
    }

    Node *auxRear = rear;
    rear = rear->prev;
    rear->next = NULL;
    
    delete auxRear;
    return;
}

void Deque::removeFromFront() {
    if (isEmpty()) {
        cout << "The Deque is empty." << endl;
        return;
    }
    
    if (front == rear) {
        front = NULL;
        rear = NULL;
        return;
    }

    Node *auxFront = front;
    front = front->next;
    front->prev = NULL;

    delete auxFront;
    return;
}