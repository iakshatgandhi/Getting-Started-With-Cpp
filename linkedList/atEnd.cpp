#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next; 

    node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void insertAtTail(node* &tail, int data){
        node* temp = new node(data);
        tail -> next = temp;
        tail = temp;
    }

    void display(node* &head){
        node* temp = head;
        while(temp != NULL){
            cout<<temp -> data <<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

int main(){
    node* node1 = new node(6);
    node* head = node1;
    node* tail = node1; // initially for a single node head and tail point to the same element

    display(head);

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);

    display(head);

    return 0;
}