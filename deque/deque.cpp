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
        newNode->next = NULL;
        rear = front = newNode;
        return;        
    }

    newNode->next = rear;
    rear = newNode;
    return;
}

void Deque::insertOnFront(int value) {
    Node *newNode = new Node();
    newNode->value = value;

    if (isEmpty()) {
        newNode->next = NULL;
        front = rear = newNode;
        return;
    }

    newNode->next = front;
    front = newNode;
    return;
}