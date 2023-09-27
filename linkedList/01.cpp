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

void insertAtHead(node* &head, int data){
        node* temp = new node(data);
        temp -> next = head;
        head = temp;
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

    display(head);

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    display(head);

    return 0;
}