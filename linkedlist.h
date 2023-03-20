#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <iostream>
using namespace std;

// Let's create an "interface" for a wrapper class
// where whatever we're wrapping around should at least
// be able to be printed
class Printable {
    public:
        virtual ~Printable(){}
        //This must be overriden by a subclass
        virtual void print()=0;//"pure virtual"
};

class PrintableInt: public Printable {
    private:
        int x;
    public:
        PrintableInt(int x) {
            this->x = x;
        }
        void print() {
            cout << x;
        }
};

class PrintableFloat:public Printable {
    private:
        float x;
    public:
        PrintableFloat(float x) {
            this->x = x;
        }
        void print() {
            cout << x;
        }
};

class PrintableAnimal:public Printable {
    private:
        float x;
        float y;
    public:
        PrintableAnimal() {
            this->x = 0.5;
            this->y = 0.5;
        }
        void print() {
            cout << "Animal(" << x << ", " << y << ")";
        }
};


// Wrapper class around arbitrary object reference 
// that also holds arrows
class LinkedNode {
    public:
        Printable* obj; // Object I'm wrapping
        LinkedNode* next; // Arrow to the next object
        LinkedNode(Printable* obj) {
            this->obj = obj;
            next = NULL;
        }
};



class LinkedList {
    private:
        LinkedNode* head;
        int N;
    public:
        LinkedList();
        ~LinkedList();

        /**
         * @brief Return how many elements are in this list
         * 
         * @return int Number of elements
         */
        int size() {
            return N;
        }

        /**
         * @brief Add an object reference to the beginning of the 
         * linked list
         * 
         * @param obj Object reference to add
         */
        void addFirst(Printable* obj);
        /**
         * @brief Remove the first occurrence of an object from 
         * the list
         * 
         * @param obj Object reference to remove
         */
        void remove(Printable* obj);

        /**
         * @brief Remove the first object from the list and return
         * what it was
         * 
         * @return Printable**
         */
        Printable* removeFirst();

        /**
         * @brief Loop through the linked list and return
         * the elements in an array
         * 
         * @param N Pointer to size of array
         * @return Printable**
         */
        Printable** toArray(int* N);
};

class Stack {
    private:
        // Local variables
        int N;
    public:
        Stack();
        ~Stack();
        void push(Printable* obj);
        Printable* pop();
        Printable* peekTop();
        int size() {return N;}

};



#endif