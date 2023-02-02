#include<iostream>
using namespace std;
int main(){

    int i=3;
    int *ptr=&i;

    cout<<"value is "<<*ptr<<endl;
    cout<<"address is "<<ptr<<endl;

    cout<<(*ptr)++<<endl;
    cout<<++(*ptr);

}