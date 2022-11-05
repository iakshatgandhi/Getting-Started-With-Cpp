/*
#include<iostream>
using namespace std;
int main(){
int i,j,n,count;
cin>>n;
i=1;
count=0;
while(i<=n){
    j=1;
    while(j<=i){
        char ch='A'+count;
        cout<<ch<<" ";
        count++;
        j++;
    }
    i++;
    cout<<endl;
}
}
*/

//using 3 variables only
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    char a='A';
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}