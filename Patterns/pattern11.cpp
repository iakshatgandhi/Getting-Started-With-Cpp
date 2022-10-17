// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        cout<<(i-j+1)<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
}
