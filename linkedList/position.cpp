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

// inserting at the head
void insertAtHead(node* &head, int data){
        node* temp = new node(data);
        temp -> next = head;
        head = temp;
    }

// inserting at the end
void insertAtTail(node* &tail, int data){
        node* temp = new node(data);
        tail -> next = temp;
        tail = temp;
    }

// inserting at any position
void insertAtPosition(node* &tail, node* &head, int position, int data){
    if(position == 1){
        insertAtHead(head,data);
        return ;
    }
        node* temp = head;
        int cnt = 1;
        while(cnt < position-1){
            temp = temp-> next;
            cnt++;
        }
        // for the condition of tail updating
        if(temp -> next == NULL){
            insertAtTail(tail,data);
            return;
        }

        node* newNode = new node(data);
        newNode -> next = temp->next;
        temp->next = newNode;
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

    insertAtPosition(tail,head,4,35);
    insertAtPosition(tail,head,2,15);

    insertAtPosition(tail,head,1,0); 
    //edge case won't work for first position cuz 
    // starting of cnt is from one one previous element is needed to over come we had to call insert at head under if condition.

    display(head);

    insertAtPosition(tail,head,8,50);
    display(head);
    // there is another case its working fine but the tail pointer is not mapped to the last node

    cout<<"head "<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

    return 0;
}