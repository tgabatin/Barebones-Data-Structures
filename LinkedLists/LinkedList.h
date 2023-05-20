#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>

class LinkedList {
    private: 
        struct Node {
            int data;
            Node* next;
        };

        Node* head;
    
    public:
        LinkedList();
        ~LinkedList();

        void insert(int value);
        void remove(int valuie);
        bool search(int value);
        void display();
};

#endif