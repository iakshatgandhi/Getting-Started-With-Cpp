
/* Pointers basically stores the memory location of a particular variable */

#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p; // defining of a pointer variable
    p=&x; //ampersand operator gives the address of something
    cout<<x<<endl;  
    cout<<*p<<endl;  // Dereference operator Output the value of food with the pointer 
    cout<<p;
}