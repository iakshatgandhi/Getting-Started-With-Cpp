#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next; 

    // constructor
    node(int data){
        this-> data = data;
        this-> next = NULL;
    }
    // destructor
    ~node(){
        int value = this -> data; // just to show 
        // memory free
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for the node with data"<< value <<endl;
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
// Deletion of the node
void deleteNode(int position, node* &head){
    // starting node
    if(position == 1){
        node* temp = head;
        head = head -> next;
        // making memory free
        temp -> next = NULL;
        delete temp;
    }
    else{
        node* cur = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = cur;
            cur = cur -> next; 
            cnt++;  
        }
        prev -> next = cur -> next;

        cur -> next = NULL;
        delete cur;
    }
}

//  Displaying
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
    insertAtPosition(tail,head,4,35);
    insertAtPosition(tail,head,2,15);

    display(head);

    deleteNode(1,head);
    deleteNode(4,head);
    display(head);

    cout<<"head "<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

    return 0;
}