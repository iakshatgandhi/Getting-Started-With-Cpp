#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"Number is divisible by both";
    }
    else if(n%2==0){
        cout<<"Divisible by only two";
    }
    else if(n%3==0){
        cout<<"Divisible by only three";
    }
    else{
        cout<<"Number is not divisible";
    }
}