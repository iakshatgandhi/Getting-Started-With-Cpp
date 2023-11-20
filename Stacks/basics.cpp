#include <iostream>
#include <stack>
// stack using the standard template library of the cpp
int main() {
    std::stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);
    myStack.push(20);

    // Checking if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Accessing the top element
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Popping elements from the stack
    myStack.pop();

    std::cout << "Popped the top element." << std::endl;

    // Accessing the new top element
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Size of the stack
    std::cout << "Stack size: " << myStack.size() << std::endl;

    // Popping all elements from the stack
    while (!myStack.empty()) {
        myStack.pop();
    }

    std::cout << "Stack size after popping all elements: " << myStack.size() << std::endl;

    return 0;
}
