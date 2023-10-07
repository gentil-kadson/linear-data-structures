#include <iostream>
#include "node.h"
using namespace std;

class Deque {
    Node* rear;
    Node* front;

    public:
        Deque();

        bool isEmpty();
        int getFront();
        int getRear();

        void insertOnRear(int value);
        void insertOnFront(int value);
        void removeFromRear();
        void removeFromFront();
};