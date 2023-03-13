#include "linkedlist.h"
#include <stdio.h>

LinkedList::LinkedList() {
    head = NULL;
}

LinkedList::~LinkedList() {
    LinkedNode* node = head;
    while (node != NULL) {
        LinkedNode* next = node->next;
        delete node;
        node = next;
    }
}

int LinkedList::size() {
    int N = 0;
    LinkedNode* node = head;
    while(node != NULL) {
        N++;
        node = node->next;
    }
    return N;
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
    int N = size();
    if (head != NULL) {
        if (head->obj == obj) {
            removeFirst();
        }
        else {
            LinkedNode* node = head;
            while (node->next != NULL) {
                if(node->next->obj == obj) {
                    LinkedNode* temp = node->next;
                    node->next = node->next->next;
                    delete temp;
                    N--;
                    return;
                }
                node = node->next;
            }
        }
    }
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
    if(head == NULL) {
        return ret;
    }
    else {
        ret = head->obj;
        LinkedNode* next = head->next;
        delete head;
        head = next;
        return ret;
    }
    //return ret;
}

/**
 * @brief Loop through the linked list and return
 * the elements in an array
 * 
 * @param N Pointer to size of array
 * @return void** 
 */
void** LinkedList::toArray(int* NOut) {
    *NOut = size();
    void** arr = new void*[*NOut];

    // Loop through the linked list and copy in every element
    LinkedNode* node = head;
    int i = 0;
    while (node != NULL) {
        arr[i] = node->obj;
        node = node->next;
        i++;
    }
    return arr;
}


/////////////////////////////////////

Stack::Stack() {
    // TODO: Fill this in
}

void Stack::push(void* obj) {
    list.addFirst(obj);
}

void* Stack::pop() {
    return list.removeFirst();
}