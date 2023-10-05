#include <iostream>
#include "node.h"
using namespace std;

class Stack
{
    Node *current;

public:
    Stack();

    bool isEmpty();
    bool exists(int value);
    void push(int value);
    void pop();
    void printStack();
};