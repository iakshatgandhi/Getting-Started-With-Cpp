#include<iostream>
using namespace std;
#define MAX 100
 
class inputRestrictedQueue {
    int arr[MAX];
    int front;
    int rear;
    int size;
 
public:
    inputRestrictedQueue(int size)
    {
        front = -1;
        rear = -1;
        this->size = size;
    }

    void insertrear(int key);
    void deletefront();
    void deleterear();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
};

bool inputRestrictedQueue::isFull()
{
    return ((front == 0 && rear == size - 1) || front == rear + 1);
}
bool inputRestrictedQueue::isEmpty() { return (front == -1); }

void inputRestrictedQueue::insertrear(int key)
{
    if (isFull()) {
        cout << " Overflow\n " << endl;
        return;
    }
 
    // If queue is initially empty
    if (front == -1) {
        front = 0;
        rear = 0;
    }
 
    // Rear is at last position of queue
    else if ((rear == size - 1) && (front != 0))
        rear = 0;
 
    // Increment rear end by '1'
    else
        rear++;
 
    // Insert current element into Deque
    arr[rear] = key;
}

void inputRestrictedQueue::deletefront()
{
 
    // Check whether Deque is empty
    // or not
    if (isEmpty()) {
        cout << "Queue Underflow\n"
             << endl;
        return;
    }
 
    // Deque has only one element
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else
 
        // Back to initial position
        if (front == size - 1)
        front = 0;
 
    else
 
        // Increment front by '1' to remove
        // current front value from Deque
        front = front + 1;
}
void inputRestrictedQueue::deleterear()
{
    if (isEmpty()) {
        cout << " Underflow\n"
             << endl;
        return;
    }
 
    // Deque has only one element
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = size - 1;
    else
        rear = rear - 1;
}
int getFront(){
    if (isEmpty()) {
        cout << " Underflow\n"
             << endl;
        return -1;
    }
    return arr[front];
}
int getRear(){
    if (isEmpty() || rear < 0) {
        cout << " Underflow\n"
             << endl;
        return -1;
    }
    return arr[rear];
}