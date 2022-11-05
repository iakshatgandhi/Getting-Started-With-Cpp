#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
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
        cout<<"*";
        j++;
    }
    cout<<endl;
    i--;
}
} 

/*
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;

    i=n;
    while(i>=1){
        j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i--;
    }
}*/