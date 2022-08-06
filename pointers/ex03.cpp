
/* so just like this example we use pointer variable to modify the value of variable in B/W the program*/


#include<iostream>
using namespace std;
int main(){
    int x=100;
    int *ptr=&x;
    cout<<*ptr<<endl;
    x=x+20;
    cout<<*ptr<<endl;
    *ptr=*ptr+0.18*x;
    cout<<*ptr;

}