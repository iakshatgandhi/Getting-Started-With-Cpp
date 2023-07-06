#include<iostream>
using namespace std;

bool isSorted(int arr[],int len){
   
    if(len == 0 || len ==1){
        return 1;
    }

    if(arr[0] > arr[1]){
        return 0;
    }else{
        bool remPart = isSorted(arr+1, len-1);
        return remPart;
    }

}

int main(){

    int arr[5],n;
    cout<<"enter the array element : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< size<<endl;
    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"The array is sorted ";
    }else {
        cout<<"Array UNSORTED";
    }
}