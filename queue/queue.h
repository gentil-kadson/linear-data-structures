#include <iostream>
#include "node.h"
using namespace std;

class Queue
{
    Node *current;

public:
    Queue();

    void push(int value);
    void pop();
    bool isEmpty();
    bool exists(int value);
    void printQueue();
};