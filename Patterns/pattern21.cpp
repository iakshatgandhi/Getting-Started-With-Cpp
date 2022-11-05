#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n;
    
    i=1;
    while(i<=n){
    a=n-i;
    while(a!=0){
        cout<<" ";
        a=a-1;
    }
    j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}
}