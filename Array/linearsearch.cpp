#include<iostream>
using namespace std;
bool search(int arr[],int a,int b){
    for(int i=0;i<a;i++){
        if (arr[i]==b)
            return 1;
    }
    return 0;
}

int main(){
    int n,arr[50],key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key to be searched for ";
    cin>>key;

    bool found= search(arr,n,key);

    if(found){
        cout<<"the key is present ";
    }else
    cout<<"the key is absent";
}