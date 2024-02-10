#include<iostream>
using namespace std;

class QueueImplimentation {
private:
        int *arr;
        int front;
        int rear;
        int capacity;

public:
    QueueImplimentation() {
        cout << "Enter the size of the Queue: ";
        cin >> capacity;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }
    void enqueue(int data) {
        if (rear == capacity - 1) {
            cout << "Queue is Full!" << endl;
        } else {
            if (front == -1) {
                front++;
            }
            rear++;
            arr[rear] = data;
        }
    }
    void dequeue() {
        if (front == -1) {
            cout << "Queue is Empty!" << endl;
        } else {
            if(front == rear){
                front = -1;
                rear = -1;
            } else {
                front++;
            }
        }
    }
    void display() {
        if (front == -1) {
            cout << "Queue is Empty!" << endl;
        } else { 
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    QueueImplimentation q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    return 0;
}