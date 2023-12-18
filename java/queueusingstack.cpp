#include <iostream>
#include <stack>

class QueueUsingStacks {
private:
    std::stack<int> s1, s2;

public:
    void enqueue(int x) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void dequeue() {
        if (s1.empty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        s1.pop();
    }

    int front() {
        if (s1.empty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1; // Assuming -1 represents an error or an invalid value
        }

        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {
    QueueUsingStacks queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    std::cout << "Front Element: " << queue.front() << std::endl;
    queue.dequeue();
    std::cout << "Front Element after dequeue: " << queue.front() << std::endl;

    return 0;
}
