#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
    LinkedList list;
    for (int i = 0; i < 15; i++) {
        PrintableInt* x = new PrintableInt(i*i);
        list.addFirst(x);
    }
    list.addFirst(new PrintableAnimal());

    while (list.size() > 0) {
        Printable* x = list.removeFirst();
        x->print();
        cout << " ";
        delete x;
    }
    cout << "\n";

    return 0;
}