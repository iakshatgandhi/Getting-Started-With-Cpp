/*
#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            cout<<j<<" ";
        }
        for(j=n;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

#include<iostream>
using namespace std;
int main(){
    int i,j,n,b;
    cin>>n;
    for(i=n;i>=1;i--){
        b=n-i;
        while(a!=0){
            cout<<"*"<<" ";
            b--;
        }
        for(j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}*/

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,a,b;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        a=n-i;
        while(a!=0){
            cout<<"*"<<" ";
            a--;
        }
        b=n-i;
        while(b!=0){
            cout<<"*"<<" ";
            b--;
        }
        for(k=i;k>=1;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
