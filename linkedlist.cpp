#include "linkedlist.h"
#include <stdio.h>

LinkedList::LinkedList() {
    head = NULL;
    N = 0;
}

LinkedList::~LinkedList() {
    LinkedNode* node = head;
    while (node != NULL) {
        LinkedNode* next = node->next;
        delete node;
        node = next;
    }
}

/**
 * @brief Add an object reference to the beginning of the 
 * linked list
 * 
 * @param obj Object reference to add
 */
void LinkedList::addFirst(void* obj) {
    // Make a new container
    LinkedNode* node = new LinkedNode(obj);
    node->next = head;
    this->head = node;
    N++;
}

/**
 * @brief Remove the first occurrence of an object from 
 * the list
 * 
 * @param obj Object reference to remove
 */
void LinkedList::remove(void* obj) {
    // TODO: Fill this in
}

/**
 * @brief Remove the first object from the list and return
 * what it was
 * 
 * @return void* 
 */
void* LinkedList::removeFirst() {
    void* ret = NULL;
    if (N > 0) {
        LinkedNode* oldHead = head;
        ret = head->obj;
        head = head->next;
        N--;
        delete oldHead;
    }
    return ret;
}

/**
 * @brief Loop through the linked list and return
 * the elements in an array
 * 
 * @param N Pointer to size of array
 * @return void** 
 */
void** LinkedList::toArray(int* NOut) {
    *NOut = N;
    void** arr = new void*[N];
    // Cursor points to a LinkedNode that we're
    // at as we loop through
    LinkedNode* cursor = this->head;
    for (int i = 0; i < N; i++) {
        // Take out the data and copy it into
        // arr
        arr[i] = cursor->obj;
        cursor = cursor->next;
    }
    return arr;
}


/////////////////////////////////////

Stack::Stack() {
    // TODO: Fill this in
}

void Stack::push(void* obj) {
    // TODO: Fill this in
}

void* Stack::pop() {
    void* ret = NULL;
    // TODO: Fill this in

    return ret;
}