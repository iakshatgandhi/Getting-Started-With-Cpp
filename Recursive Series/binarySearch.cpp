#include<iostream>
using namespace std;

int binarySearch(int *arr, int s, int e, int key){
    //base condition if key is not there
    if(s>e){
        return 0;
    }

    int mid = s+(e-s)/2;

    //base condition if mid is the key element
    if(arr[mid]==key){
        return 1;
    }

    if(arr[mid]<key){
        binarySearch(arr,mid+1,e,key);
    }
    else{
        binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[10], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int key;
   cout<<"enter the key element ";
   cin>>key;

   bool found= binarySearch(arr, 0, n-1, key);

    if(found){
        cout<<"the key is present ";
    }else
    cout<<"the key is absent";

}