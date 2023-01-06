#include<iostream>
using namespace std;

int print (int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[50],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int j=0;j<n;j+=2){
        if(j+1<n){
            swap(arr[j],arr[j+1]);
        }
    }
    print(arr,n);
} 