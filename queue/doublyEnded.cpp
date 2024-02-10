#include <iostream>
using namespace std;
#define MAX 100

class outputRestrictedQueue {
    int arr[MAX];
    int front;
    int rear;
    int size;

public:
    outputRestrictedQueue(int size)
    {
        front = -1;
        rear = -1;
        this->size = size;
    }

    void insertrear(int key);
    void insertfront(int key);
    void deletefront();
    void deleterear();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
};

bool outputRestrictedQueue::isFull()
{
    return ((front == 0 && rear == size - 1) || front == rear + 1);
}

bool outputRestrictedQueue::isEmpty() { return (front == -1); }

void outputRestrictedQueue::insertrear(int key)
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
    else if (rear == size - 1)
        rear = 0;
 
    // Increment rear end by '1'
    else
        rear++;
 
    // Insert current element into Deque
    arr[rear] = key;
}

void outputRestrictedQueue::insertfront(int key)
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
 
    // front is at first position of queue
    else if (front == 0)
        front = size - 1;
 
    // decrement front end by '1'
    else
        front--;
 
    // insert current element into Deque
    arr[front] = key;
}

void outputRestrictedQueue::deletefront()
{
 
    // check whether Deque is empty or not
    if (isEmpty()) {
        cout << "Queue Underflow\n" << endl;
        return;
    }
 
    // Deque has only one element
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else
        // back to initial position
        if (front == size - 1)
            front = 0;
 
        else // increment front by '1' to remove current
            // front value from Deque
            front++;
}

void outputRestrictedQueue::deleterear()
{
    if (isEmpty()) {
        cout << " Underflow\n" << endl;
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
        rear--;
}

int outputRestrictedQueue::getFront()
{
    // check whether Deque is empty or not
    if (isEmpty()) {
        cout << " Underflow\n" << endl;
        return -1;
    }
    return arr[front];
}

int outputRestrictedQueue::getRear()
{
    // check whether Deque is empty or not
    if (isEmpty() || rear < 0) {
        cout << " Underflow\n" << endl;
        return -1;
    }
    return arr[rear];
}

int main()
{
    outputRestrictedQueue q(5);
 
    // Insert 4 at rear end of Deque
    q.insertrear(4);
 
    // insert 12 at rear end of Deque
    q.insertrear(12);
 
    // insert 24 at rear end of Deque
    q.insertrear(24);
 
    // insert 36 at rear end of Deque
    q.insertrear(36);
 
    // insert 48 at rear end of Deque
    q.insertrear(48);
 
    // insert 48 at front end of Deque
    q.insertfront(48);
 
    // insert 36 at front end of Deque
    q.insertfront(36);
 
    cout << "Front element is: " << q.getFront() << endl;
    cout << "Rear element is: " << q.getRear() << endl;
 
    q.deletefront();
    cout << "After deleting front element new front"
         << " is: " << q.getFront() << endl;
 
    q.deleterear();
    cout << "After deleting rear element new rear"
         << " is: " << q.getRear() << endl;
 
    return 0;
}


