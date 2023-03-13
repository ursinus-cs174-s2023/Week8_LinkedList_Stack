#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
    LinkedList list;
    void* toRemove = NULL;
    for (int i = 0; i < 15; i++) {
        int* x = new int;
        *x = i*i;
        if (i == 6) {
            toRemove = x;
            cout << "Will be removing " << *x << " from the list\n";
        }
        list.addFirst(x);
    }
    int i = 0;
    // Remove something in the middle
    list.remove(toRemove);
    while (list.size() > 0) {
        cout << "i = " << i << "\n";
        int* x = (int*)list.removeFirst();
        cout << *x << " ";
        delete x;
        i++;
    }
    cout << "\n";

    return 0;
}