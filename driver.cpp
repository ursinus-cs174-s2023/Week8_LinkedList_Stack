#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
    LinkedList list;
    for (int i = 0; i < 15; i++) {
        int* x = new int;
        *x = i*i;
        list.addFirst(x);
    }

    while (list.size() > 0) {
        int* x = (int*)list.removeFirst();
        cout << *x << " ";
    }
    list.removeFirst();
    cout << "\n";

    return 0;
}