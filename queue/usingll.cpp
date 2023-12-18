#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        std::cout << "Element " << data << " enqueued into the queue." << std::endl;
    }

    void dequeue() {
        if (front == nullptr) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
        std::cout << "Element dequeued from the queue." << std::endl;
    }

    int frontElement() {
        if (front == nullptr) {
            std::cout << "Queue is empty. No front element." << std::endl;
            return -1; // Assuming -1 as a placeholder for an invalid value
        }

        return front->data;
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    Queue queue;

    std::cout << (queue.isEmpty() ? "Queue is empty." : "Queue is not empty.") << std::endl;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    std::cout << "Front element: " << queue.frontElement() << std::endl;

    queue.dequeue();
    queue.dequeue();

    std::cout << "Front element: " << queue.frontElement() << std::endl;

    std::cout << (queue.isEmpty() ? "Queue is empty." : "Queue is not empty.") << std::endl;

    return 0;
}
