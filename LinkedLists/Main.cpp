#include "LinkedList.h"
#include <iostream>

int main() {
  LinkedList list;

  list.insert(5);
  list.insert(10);
  list.insert(15);

  std::cout << "Linked List: ";
  list.display();

  list.remove(10);

  std::cout << "Updated Linked List: ";
  list.display();

  int value = 15;
  bool found = list.search(value);
  if (found) {
    std::cout << "Value " << value << " is found in the linked list." << std::endl;
  } else {
    std::cout << "Value " << value << " is not found in the linked list." << std::endl;
  }

  return 0;
}
