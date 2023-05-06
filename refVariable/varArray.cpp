#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    int ans = 0;
    for(int j=0;j<n;j++){
        ans = ans+arr[j];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];                        // Imp::  arr[i] is written here cause 	1. arr[i]=*(arr+i);   2. i[arr]=*(i+arr);
    }
    int sum = getSum(arr,n);
    cout<<"the sum is "<<sum;
}