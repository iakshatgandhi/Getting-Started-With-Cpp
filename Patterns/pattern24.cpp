#include<iostream>
using namespace std;
int main(){
    int i,j,n,a,count=1;
    cin>>n;
    i=n;
    while(i>=1){
        a=n-i;
        while(a!=0){
            cout<<" ";
            a--;
        }
        j=1;
        while(j<=i){
            cout<<count;
            j++;
        }
        count++;
        cout<<endl;
        i--;
    }

} 