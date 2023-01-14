#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int ans=0;
    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int ans=0;
    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){

    int arr[10]={3,6,12,33,33,33,33,41,81,90};

    cout<<"the first occurrence of 33 is at index "<<firstOcc(arr,10,33)<<endl;
    cout<<"the last occurrence of 33 is at index "<<lastOcc(arr,10,33);
    
    return 0;
}