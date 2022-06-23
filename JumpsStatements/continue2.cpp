#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Number is not a Prime Number"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Number is Prime Number"<<endl;
    }
    return 0;
}