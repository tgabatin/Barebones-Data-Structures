#ifndef STACKS_H
#define STACKS_H

#include <cstddef>

class Stack {
    private: 
        struct Node {
            int data;
            Node* next;
        };

        Node* top;

    public:
        Stack();
        ~Stack();

        void push(int value);
        int pop();
        int peek();
        bool isEmpty();
        void display();
};


#endif