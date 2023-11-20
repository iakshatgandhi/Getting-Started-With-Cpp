#include <iostream>
using namespace std;

class StackImplementation {
private:
    int top = -1;
    int size;
    int* stack;

public:
    // constructor
    StackImplementation() {
        cout << "Enter the size of the stack: ";
        cin >> size;
        stack = new int[size];
    }

    void push(int data) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            stack[top] = data;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            top--;
        }
    }

    void peep() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << stack[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }

    bool isFull() {
        if (top == size - 1) {
            return true;
        } else {
            return false;
        }
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    StackImplementation obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.display();
    obj.pop();
    obj.display();
    obj.peep();
    cout << obj.isFull() << endl;
    cout << obj.isEmpty() << endl;

    return 0;
}
