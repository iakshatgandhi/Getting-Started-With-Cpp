#include<iostream>
using namespace std;

class QueueImplementation {
    private:
        int *arr;
        int front;
        int rear;
        int capacity;

    public:
        QueueImplementation() {
            cout << "Enter the size of the Queue: ";
            cin >> capacity;
            arr = new int[capacity];
            front = -1;
            rear = -1;
        }

        void enqueue(int data) {
            if ((front == 0 && rear == capacity - 1) || (rear == (front - 1) % (capacity - 1))) {
                cout << "Queue is Full!" << endl;
                return;
            } else if (front == -1) {
                front = rear = 0;
            } else if (rear == capacity - 1) {
                rear = 0;
            } else {
                rear = (rear + 1) % capacity;
            }
            arr[rear] = data;
            cout << data << " enqueued to queue\n";
        }

        int dequeue() {
            if (front == -1) {
                cout << "Queue is Empty!" << endl;
                return -1;
            }
            int ans = arr[front];
            arr[front] = -1;
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % capacity;
            }
            return ans;
        }

        void display() {
            if (front == -1) {
                cout << "Queue is Empty!" << endl;
            } else {
                int i = front;
                if (front <= rear) {
                    while (i <= rear)
                        cout << arr[i++] << " ";
                } else {
                    while (i < capacity)
                        cout << arr[i++] << " ";
                    i = 0;
                    while (i <= rear)
                        cout << arr[i++] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    QueueImplementation q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.enqueue(6);
    q.enqueue(7);

    q.display();

    return 0;
}
