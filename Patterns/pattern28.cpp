/*
5
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n;
    i=1;
    while(i<=n){
        a=n-i;
        while(a!=0){
            cout<<"  ";
            a--;
        }
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        int start=i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
        i++;
    }
}