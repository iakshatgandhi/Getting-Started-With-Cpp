/*
#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        char ch='A'+i+j;
        cout<<ch<<" ";
    }
    cout<<endl;
}
}*/


#include<iostream>
 using namespace std;
 int main(){
     int i,j,n;
     cin>>n;
     i=0;
    while(i<n){
        for(j=i;j<n+i;j++){
            char ch='A'+j;
            cout<<ch<<" ";
        }
        cout<<endl;
        i++;
    }
}
