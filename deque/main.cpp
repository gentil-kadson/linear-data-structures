#include <iostream>
#include "deque.h"
using namespace std;

int main () {
    Deque *myDeque = new Deque();
    myDeque->insertOnRear(3);
    myDeque->insertOnRear(-5);

    myDeque->insertOnFront(10);
    myDeque->insertOnFront(-7);

    cout << myDeque->getRear() << endl;
    cout << myDeque->getFront() << endl;

    myDeque->removeFromFront();
    myDeque->removeFromFront();
    myDeque->removeFromFront();
    myDeque->removeFromFront();
    cout << myDeque->getFront() << endl;

    return 0;
}