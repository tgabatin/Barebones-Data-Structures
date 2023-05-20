#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
  Node* current = head;
  while (current != nullptr) {
    Node* next = current->next;
    delete current;
    current = next;
  }
}

void LinkedList::insert(int value) {
  Node* newNode = new Node;
  newNode->data = value;
  newNode->next = nullptr;

  if (head == nullptr) {
    head = newNode;
  } else {
    Node* current = head;
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = newNode;
  }
}

void LinkedList::remove(int value) {
  if (head == nullptr) {
    return;
  }

  if (head->data == value) {
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
  }

  Node* prev = head;
  Node* current = head->next;
  while (current != nullptr && current->data != value) {
    prev = current;
    current = current->next;
  }

  if (current != nullptr) {
    prev->next = current->next;
    delete current;
  }
}

bool LinkedList::search(int value) {
  Node* current = head;
  while (current != nullptr) {
    if (current->data == value) {
      return true;
    }
    current = current->next;
  }
  return false;
}

void LinkedList::display() {
  Node* current = head;
  while (current != nullptr) {
    std::cout << current->data << " ";
    current = current->next;
  }
  std::cout << std::endl;
}
