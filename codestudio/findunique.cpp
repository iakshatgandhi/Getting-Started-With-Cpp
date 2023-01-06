#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
   int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int t,size,arr[100];
    cin>>t;
    
    for(int i=1;i<=t;i++){
        cin>>size;

        cout<<findUnique(arr,size);
    }
}


// just in case
//asterisk before the argument in a function denotes call by reference 



//https://www.codingninjas.com/codestudio/problems/find-unique_625159