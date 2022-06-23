#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the number";
    cin>>n;
    while(n>0){
        cout<<"correct"<<endl;
        cout<<"enter second number";
        cin>>n;
    }
    cout<<"the number is incorrect";
    return 0;
}