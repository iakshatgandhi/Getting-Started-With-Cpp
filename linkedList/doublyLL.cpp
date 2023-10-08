#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
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

void insertAtHead(node* &head, node* &tail, int data){
    // in case where the list is empty at the start
    if(head == NULL){
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp; 
    }
}

void insertAtTail(node* &tail, node* &head, int data){
    if(tail == NULL){
        node* temp = new node(data);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(node* &tail, node* &head, int position, int data){
    if(position == 1){
        insertAtHead(head,tail,data);
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
            insertAtTail(tail, head, data);
            return;
        }

        node* newNode = new node(data);
        newNode -> next = temp->next;
        temp -> next -> prev = newNode;
        newNode -> prev = temp;
        temp -> next = newNode;
    }
// Deletion of the node
void deleteNode(int position, node* &head){
    // starting node
    if(position == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;

        // making memory free
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
        cur -> prev = NULL;
        prev -> next = cur -> next;
        cur -> next = NULL;
        delete cur;
    }
}

void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp-> next;
    }
    cout << endl;
}

int getLength(node* &head){
    node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp-> next;
    }
    return length;
}

int main(){
    //node* node1 = new node(10);
    node* head = NULL;
    node* tail = NULL;
    display(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,tail,29);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head, 78);
    display(head);

    insertAtPosition(tail,head,3,50);
    insertAtPosition(tail,head,1,0);
    insertAtPosition(tail,head,6,5);
    display(head);

    deleteNode(2,head);
    deleteNode(1,head);
    deleteNode(4,head);
    display(head);

}