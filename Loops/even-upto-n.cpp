#include<iostream>
using namespace std;
int main(){
    //even number upto n
    int n,i;
    cin>>n;
    for(i=2;i<=n;i+=2){
        if(i<=n){
             cout<<i<<" ";
        }else{
            cout<<2;
        }
    }
    return 0;
}

