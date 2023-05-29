#include <Stack.h>
#include <iostream>

int main() {
    Stack stack;

    int numValues;
    std:: cout << "Enter the number of values to push onto the stack. ";
    std::cin >> numValues;

    for (int i = 0; i < numValues; i++) {
        int value;
        std::cout << "Enter a value to push onto the stack: ";
        std::cin >> value;
        stack.push(value);
    }

    std::cout << "Stack: ";
    stack.display();

    int poppedValue = stack.pop();
    std::cout << "Popped value: " << poppedValue << std::endl;

    std::cout << "Peek value: " << stack.peek() << std::endl;

    bool isEmpty = stack.isEmpty();
    std::cout << "Stack Empty: " << (isEmpty ? "Yes" : "No") << std::endl;

    return 0;

}