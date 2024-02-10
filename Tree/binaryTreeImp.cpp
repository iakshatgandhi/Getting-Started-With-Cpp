#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"enter the root data: ";
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root = new Node(data);
    cout<<"enter the left child of "<<data<<": ";
    root->left = buildTree(root->left);
    cout<<"enter the right child of "<<data<<": ";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);  
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
             q.push(temp->right);
        }
    }
}

int main(){
    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    levelOrderTraversal(root);

    return 0;
}