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
    // NO matter what, make a new node
    LinkedNode* newNode = new LinkedNode(obj);
    N++;
    if (head == NULL) {
        // There's nothing in the list
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
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
    // TODO: Fill this in

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
    void** arr = new void*[this->N];
    *NOut = this->N;

    // Loop through the linked list and copy in every element
    LinkedNode* node = head;
    for (int i = 0; i < this->N; i++) {
        arr[i] = node->obj;
        node = node->next;
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