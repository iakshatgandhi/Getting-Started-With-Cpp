#include<iostream>
using namespace std;
int main(){
    int i,j,n,a,count=1;
    cin>>n;
    i=1;
    while(i<=n){
        a=n-i;
        while(a!=0){
            cout<<"  ";
            a--;
        }
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
        i++;
    }
}
/*
#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}
*/