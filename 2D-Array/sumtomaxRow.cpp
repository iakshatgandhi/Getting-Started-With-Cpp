#include<iostream>
using namespace std;

int maxRowSum(int arr[][4],int m,int n){
    int maximum=INT16_MIN;
    int rowIndex=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
           sum+=arr[i][j];
        }
        if(sum>maximum){
            maximum=sum;
            rowIndex=i+1;
        }
    }
    cout<<"the maximum sum is "<<maximum<<endl;
    return rowIndex;
}

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The maximum sum is in the "<<maxRowSum(arr,3,4)<<"th row";
}