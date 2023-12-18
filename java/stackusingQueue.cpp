#include <iostream>
#include <queue>

class StackUsingQueues {
private:
    std::queue<int> q1, q2;
    int topElement;

public:
    StackUsingQueues() {
        topElement = -1;
    }

    void push(int x) {
        q1.push(x);
        topElement = x;
    }

    void pop() {
        while (q1.size() > 1) {
            topElement = q1.front();
            q2.push(topElement);
            q1.pop();
        }

        q1.pop();
        std::swap(q1, q2);
    }

    int top() {
        return topElement;
    }

    bool empty() {
        return q1.empty() && q2.empty();
    }
};

int main() {
    StackUsingQueues stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top Element: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top Element after pop: " << stack.top() << std::endl;

    return 0;
}
