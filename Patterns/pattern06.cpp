#include<iostream>
using namespace std;
int main(){
int i,j,n,count;
cin>>n;
count=1;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}
}