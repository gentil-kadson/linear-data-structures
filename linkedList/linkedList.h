#include <iostream>
#include "node.h"
using namespace std;

class LinkedList
{
    Node *head;

public:
    LinkedList();
    void printList();

    bool isEmpty();
    int getSize();

    void insertOnStart(int nodeValue);
    void insertOnEnd(int nodeValue);
    void insertAfterNode(Node *prev, int nodeValue);

    void removeOnStart();
    void removeOnEnd();
    void removeAfterNode(Node *prev);
};