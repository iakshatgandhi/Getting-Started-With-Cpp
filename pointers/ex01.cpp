
/* Pointers basically stores the memory location of a particular variable */

#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p; // nptation of a pointer variable
    p=&x;
    cout<<x<<endl; //ampersand operator gives the address of something 
    cout<<*p<<endl;
    cout<<p;
}