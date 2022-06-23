#include<iostream>
using namespace std;
int main() {
    int n=0,Number;
    cout<<"enter the number";
    cin>>Number;
    while(Number!=0){
        Number=Number/2;
        n++;
    }
    cout<<"number of iterations:"<<n;
return 0;
}