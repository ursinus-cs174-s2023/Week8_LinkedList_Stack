#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>

// Wrapper class around arbitrary object reference 
// that also holds arrows
class LinkedNode {
    public:
        void* obj; // Object I'm wrapping
        LinkedNode* next; // Arrow to the next object
        LinkedNode(void* obj) {
            this->obj = obj;
            next = NULL;
        }
};



class LinkedList {
    private:
        LinkedNode* head;
    public:
        LinkedList();
        ~LinkedList();

        /**
         * @brief Return how many elements are in this list
         * 
         * @return int Number of elements
         */
        int size();

        /**
         * @brief Add an object reference to the beginning of the 
         * linked list
         * 
         * @param obj Object reference to add
         */
        void addFirst(void* obj);
        /**
         * @brief Remove the first occurrence of an object from 
         * the list
         * 
         * @param obj Object reference to remove
         */
        void remove(void* obj);

        /**
         * @brief Remove the first object from the list and return
         * what it was
         * 
         * @return void* 
         */
        void* removeFirst();

        /**
         * @brief Loop through the linked list and return
         * the elements in an array
         * 
         * @param N Pointer to size of array
         * @return void** 
         */
        void** toArray(int* N);
};


class Stack {
    private:
        LinkedList list;
    public:
        Stack();

        void push(void* obj); // Adds obj to top
        void* pop(); // Remove from top
};

#endif