#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cout<<"enter the value of a and b: ";
    cin>>i>>j;
    k= i + j + ++i + ++j + j++ + i++ + j-- + --j;
    cout<<k<<endl;
    return 0;
}