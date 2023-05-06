#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int *ptr = &n;
    int *q = ptr;

    cout<<*ptr<<" - "<<*q<<endl;
    cout<<ptr<<" - "<<q<<endl;
}

//copying a pointer