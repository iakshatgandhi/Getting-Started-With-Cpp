#include<iostream>
using namespace std;

int Fabb(int num){
    int a=0,b=1,NxtNum;
    for(int i=3;i<=num;i++){
        NxtNum=a+b;
        a=b;
        b=NxtNum;
    }
    cout<<"the "<<num<<"th term of the fibonacci series is "<<NxtNum;
}

int main(){
    int n;
    cin>>n;

    Fabb(n);
}