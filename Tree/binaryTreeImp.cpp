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

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);  
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            continue;
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}

int main(){
    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout<<endl<<"Level Order Traversal: "<<endl;
    levelOrderTraversal(root);

    return 0;
}