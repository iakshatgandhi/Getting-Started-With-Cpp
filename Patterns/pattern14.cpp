#include<iostream>
using namespace std;
int main(){
int i,j,n,a;
cin>>n;
i=1;
a=0;
while(i<=n){
    j=1;
    while(j<=n){
        char ch='A'+a;
        cout<<ch<<" ";
        j++;
        a++;
    }
    cout<<endl;
    i++;
}
} 
