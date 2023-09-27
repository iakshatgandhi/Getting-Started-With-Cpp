#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next; //pointer is pointing to the next node so the pointer should be of the node type 

    node(int data){
        this-> data = data;
        this-> next = NULL;
    }
    //Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same class is created.
    // same goes here.
};
int main(){
    node* node1 = new node(6);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    return 0;
}