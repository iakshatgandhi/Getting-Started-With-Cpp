#include<iostream>
using namespace std;

void print (int *p){
    cout<<"the address is "<<p<<endl;
    cout<<"value at that address "<<*p<<endl;

}
void update(int *p){
    p=p+1;
    cout<<"updated address is "<<p<<endl;
    cout<<"updated value is "<<*p<<endl;

    *p=*p+1;
}
int main(){
    int value[2]={5,2};
    int *ptr=&value[0];

    print(ptr);
    cout<<"value is "<<value[1]<<endl;
    update(ptr);
    print(ptr);
    cout<<"value is "<<value[1];
}