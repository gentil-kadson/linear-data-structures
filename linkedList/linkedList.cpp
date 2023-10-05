#include <iostream>
#include "linkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
}

bool LinkedList::isEmpty()
{
    return head == NULL ? true : false;
}

void LinkedList::printList()
{
    if (isEmpty())
    {
        cout << "The list is empty." << endl;
        return;
    }

    Node *auxHead = head;

    while (auxHead != NULL)
    {
        cout << auxHead->value << endl;
        auxHead = auxHead->next;
    }
}

void LinkedList::insertOnStart(int nodeValue)
{
    Node *newNode = new Node();
    newNode->value = nodeValue;

    if (isEmpty())
    {
        newNode->next = NULL;
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
    return;
}

void LinkedList::insertOnEnd(int nodeValue)
{
    Node *newNode = new Node();
    newNode->value = nodeValue;
    newNode->next = NULL;

    if (isEmpty())
    {
        head = newNode;
        return;
    }

    Node *auxHead = head;
    while (auxHead->next != NULL)
    {
        auxHead = auxHead->next;
    }

    auxHead->next = newNode;
    return;
}

void LinkedList::insertAfterNode(Node *prev, int nodeValue)
{
    if (isEmpty())
    {
        cout << "The list is empty." << endl;
        return;
    }

    Node *auxHead = head;
    while (auxHead->value != prev->value)
    {
        auxHead = auxHead->next;
    }

    Node *newNode = new Node();
    newNode->value = nodeValue;
    newNode->next = auxHead->next;
    auxHead->next = newNode;
    return;
}

void LinkedList::removeOnStart()
{
    if (isEmpty())
    {
        cout << "The list is empty." << endl;
        return;
    }

    Node *auxHead = head;
    head = head->next;

    delete auxHead;
    return;
}

void LinkedList::removeOnEnd()
{
    if (isEmpty())
    {
        cout << "The list is empty." << endl;
        return;
    }

    Node *auxHead = head;
    while (auxHead->next->next != NULL)
    {
        auxHead = auxHead->next;
    }

    delete auxHead->next;
    auxHead->next = NULL;
    return;
}

void LinkedList::removeAfterNode(Node *prev)
{
    if (isEmpty())
    {
        cout << "The list is empty." << endl;
        return;
    }

    Node *auxHead = head;
    while (auxHead->value != prev->value)
    {
        auxHead = auxHead->next;
    }

    if (auxHead->next == NULL)
    {
        Node *auxLastNode = auxHead;
        auxHead = NULL;
        delete auxLastNode;

        return;
    }

    Node *auxNext = auxHead->next;
    auxHead->next = auxHead->next->next;
    delete auxNext;
    return;
}

int LinkedList::getSize()
{
    int size = 0;
    if (isEmpty())
    {
        return size;
    }

    Node *auxHead = head;

    while (auxHead != NULL)
    {
        size++;
        auxHead = auxHead->next;
    }

    return size;
}