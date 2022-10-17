#include<iostream>
using namespace std;
int main(){
int i,j,n,count;
cin>>n;
count=1;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<count<<" ";
        count++;
    }

    cout<<endl;
}
}