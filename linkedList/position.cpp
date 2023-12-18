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

     void insertAfterNode(node* &head, int prevNode, int data) {
        node* newNode = new node(data);

        if (!head) {
            cout << "Error: The list is empty." << endl;
            return;
        }

        node* current = head;
        while (current && current->data != prevNode) {
            current = current->next;
        }

        if (!current) {
            cout << "Error: Node with data " << data << " not found." << endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
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
    

    insertAfterNode(head, 20, 10);
    display(head);
    // there is another case its working fine but the tail pointer is not mapped to the last node

    cout<<"head "<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

    return 0;
}



/*
public class Node {
    public int data;
    public Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList {
    public static void insertAtHead(Node head, int data) {
        Node temp = new Node(data);
        temp.next = head.next;
        head.next = temp;
    }

    public static void insertAtTail(Node tail, int data) {
        Node temp = new Node(data);
        tail.next = temp;
        tail = temp;
    }

    public static void insertAtPosition(Node tail, Node head, int position, int data) {
        if (position == 1) {
            insertAtHead(head, data);
            return;
        }

        Node temp = head;
        int cnt = 1;
        while (cnt < position - 1) {
            temp = temp.next;
            cnt++;
        }

        if (temp.next == null) {
            insertAtTail(tail, data);
            return;
        }

        Node newNode = new Node(data);
        newNode.next = temp.next;
        temp.next = newNode;
    }

    public static void insertAfterNode(Node head, int prevNode, int data) {
        Node newNode = new Node(data);

        if (head == null) {
            System.out.println("Error: The list is empty.");
            return;
        }

        Node current = head;
        while (current != null && current.data != prevNode) {
            current = current.next;
        }

        if (current == null) {
            System.out.println("Error: Node with data " + data + " not found.");
            return;
        }

        newNode.next = current.next;
        current.next = newNode;
    }

    public static void display(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Node node1 = new Node(6);
        Node head = node1;
        Node tail = node1;

        display(head);

        insertAtTail(tail, 20);
        insertAtTail(tail, 30);
        insertAtTail(tail, 40);

        display(head);

        insertAtPosition(tail, head, 4, 35);
        insertAtPosition(tail, head, 2, 15);

        insertAtPosition(tail, head, 1, 0);

        display(head);

        insertAtPosition(tail, head, 8, 50);

        insertAfterNode(head, 20, 10);
        display(head);

        System.out.println("head " + head.data);
        // Note: tail is not used and updated properly in the original C++ code.
    }
}
*/