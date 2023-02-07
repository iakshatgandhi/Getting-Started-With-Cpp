#include<iostream>
using namespace std;
int main(){

    int i=3;
    int *ptr=&i;

    cout<<"value is "<<*ptr<<endl;
    cout<<"address is "<<ptr<<endl;

    cout<<(*ptr)++<<endl;
    cout<<++(*ptr);

    int *p = 0;
    int a = 100;
    p = &a;


    cout<<"  "<<*p<<endl;


    //int arr[5]={22,44,67,4};
   // int *p3=&arr++;           //in this case we are trying to update the arr mapping in the symbol table 
    //cout<<*p3;                //which is not possible 

}