#include "Stack.h"
#include <iostream>

Stack::Stack() : top(nullptr) {}

Stack::~Stack() {
    Node* current = top;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void Stack::push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "Error: Stack empty. Cannot perform pop operation";
        return -1;
    }

    int poppedValue = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;

    return poppedValue;
}

int Stack::peek() {
    if (isEmpty()) {
        std::cout << "Error: Stack empty. Cannot perform peek operation.";
        return -1;
    }

    return top->data;
}

bool Stack::isEmpty() {
    return (top == nullptr);
}

void Stack::display() {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }

    Node* current = top;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout <<std::endl;
}

