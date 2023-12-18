#include<bits/stdc++.h>
using namespace std;

class node {
public: 
    int data;
    node* next;

    // constructor
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
public:
    node* head;
    int stacksize;

    // constructor
    Stack() {
        head = NULL;
        stacksize = 0;
    }

    void push(int data) {
        node* temp = new node(data);
        temp->next = head;
        head = temp;

        cout << "Element " << data << " pushed into the stack!" << endl;
        stacksize++;
    }

    void pop() {
        if (head == NULL) {
            cout << "Stack is Empty! Cannot POP an Element!" << endl;
            return;
        }

        node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        cout << "Element Popped!" << endl;
        stacksize--;
    }

    int top() {
        if (head == NULL) {
            cout << "NO TOP ELEMENT! Stack is empty!" << endl;
            return -1;
        }

        cout << "Top Element is: " << head->data << endl;
        return head->data;
    }

    int size() {
        cout << "Size of Stack is: " << stacksize << endl;
        return stacksize;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    Stack stackLL;

    cout << (stackLL.empty() ? "Stack is Empty!" : "Stack is NOT EMPTY!") << endl;

    stackLL.push(7);
    stackLL.push(9);
    stackLL.pop();
    stackLL.push(10);
    stackLL.top();
    stackLL.size();

    cout << (stackLL.empty() ? "Stack is Empty!" : "Stack is NOT EMPTY!") << endl;

    return 0;
}
