#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,6,3,19,7};
    char ch[4]="abc";

    int *ptr=&arr[0];
    char *p2=&ch[0];

    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<p2<<endl;

}