#include <iostream>
#include "stack.h"
using namespace std;

Stack::Stack()
{
    current = NULL;
}

bool Stack::isEmpty()
{
    return current == NULL ? true : false;
}

bool Stack::exists(int value)
{
    Node *auxCurrent = current;

    while (auxCurrent->value != value)
    {
        if (auxCurrent == NULL)
        {
            return false;
        }

        auxCurrent = auxCurrent->prev;
    }

    return true;
}

void Stack::push(int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    if (isEmpty())
    {
        newNode->prev = NULL;
        current = newNode;
        return;
    }

    newNode->prev = current;
    current = newNode;
    return;
}

void Stack::pop()
{
    if (isEmpty())
    {
        cout << "The stack has no elements." << endl;
        return;
    }

    Node *auxCurrent = current;
    current = current->prev;
    delete auxCurrent;

    return;
}

void Stack::printStack()
{
    Node *auxCurrent = current;

    while (auxCurrent != NULL)
    {
        cout << auxCurrent->value << endl;
        auxCurrent = auxCurrent->prev;
    }
}