#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
}
