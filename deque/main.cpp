#include <iostream>
#include "deque.h"
using namespace std;

int main () {
    Deque *myDeck = new Deque();
    myDeck->insertOnRear(3);
    myDeck->insertOnRear(-5);

    cout << myDeck->getRear() << endl;

    return 0;
}