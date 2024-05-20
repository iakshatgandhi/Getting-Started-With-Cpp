#include<iostream>
using namespace std;

int findMid(int *arr, int n){
    int totalSum = 0;
    int currSum = 0;
    for(int i=0;i<n;i++){
        totalSum += arr[i];
    }
    for(int i=0;i<n;i++){
        
        if(currSum == totalSum-(currSum+arr[i])){
            
            return arr[i];
        }
        currSum += arr[i];
    }
}

int main(){
    int arr[]={1,1,3,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMid(arr,n);
}