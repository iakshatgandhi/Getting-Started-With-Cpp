#include<iostream>
#include<queue>
#include<stack>
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
    cout<<"enter the data: ";
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root = new Node(data);
    cout<<"enter the left child of "<<data<<": "<<endl;
    root->left = buildTree(root->left);
    cout<<"enter the right child of "<<data<<": "<<endl;
    root->right = buildTree(root->right);

    return root;
}

void reverseLevelOrder(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    stack<Node*> s;

    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        // Push the current node into stack instead of printing it
        s.push(current);

        // Enqueue the child nodes of the current node
        if (current->right)
            q.push(current->right);
        if (current->left)
            q.push(current->left);
    }

    // Pop and print the nodes from stack
    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return ;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return ;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrderTraversal(Node* &root){
    queue<Node*> q;
    cout << "Enter the data: ";
    int data;
    cin>> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter the left child of "<<temp->data<<": ";
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"enter the right child of "<<temp->data<<": ";
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->left = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    buildFromLevelOrderTraversal(root);
    reverseLevelOrder(root);

    //cout<<endl<<"Level Order Traversal: "<<endl;
    //reverseLevelOrder(root);

    //cout<<endl<<"In Order Traversal: "<<endl;
    //inOrderTraversal(root);

    // cout<<endl<<"Pre Order Traversal: "<<endl;
    // preOrderTraversal(root);

    return 0;
}