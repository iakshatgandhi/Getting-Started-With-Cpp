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
            if((front == 0 && rear == capacity -1)|| rear = (front-1)%(capacity-1)){
                cout << "Queue is Full!" << endl;
                return ;
            }else if(front == -1){
                front = rear = 0;
            }else if(rear = capacity -1 && front != -1){
                rear = 0;
            }else{
                rear++;
            }
            arr[rear] = data;
            cout<< data << " enqueued to queue\n";
            return;
        }
        void dequeue() {
            if(front == -1){
                cout << "Queue is Empty!" << endl;
                return;
            }int ans = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity; // Use modular arithmetic to maintain the cyclic nature
        }
        return ans;
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

