#include<iostream>
using namespace std;

bool search(int arr[],int a,int b){
    if(a == 0){
        return 0;
    }
    if(a == 1 && arr[0] == b){
        return 1;
    }
    else{
        bool remainingPart = search(arr+1,a-1,b);
        return remainingPart;
    }
    
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