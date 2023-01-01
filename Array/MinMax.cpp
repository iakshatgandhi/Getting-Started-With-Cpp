#include<iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"the max is "<<getMax(arr,size)<<"."<<endl;
    cout<<"the min is "<<getMin(arr,size)<<".";
} 