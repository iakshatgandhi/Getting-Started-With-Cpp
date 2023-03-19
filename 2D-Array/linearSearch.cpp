#include<iostream>
using namespace std;

bool isFound(int arr[][4],int target,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void rowSum(int arr[][4],int m,int n){
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
           sum+=arr[i][j];
        }
        cout<<sum;
        cout<<endl;
    }
}

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the target: ";
    int tar;
    cin>>tar;

    if(isFound(arr,tar,3,4)){
        cout<<"PRESENT"<<endl;
    }else{
        cout<<"Not PRESENT"<<endl;
    }
    cout<<"the row wise sum of the 2d array is"<<endl;
    rowSum(arr,3,4);
    return 0;
}