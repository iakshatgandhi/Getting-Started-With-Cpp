#include<iostream>
using namespace std;

int ap(int n){
    int nthterm=(3*n)+7;
    return nthterm;
}
int main(){
    int n;
    cin>>n;
    cout<<"nth term is "<<ap(n)<<endl;
}