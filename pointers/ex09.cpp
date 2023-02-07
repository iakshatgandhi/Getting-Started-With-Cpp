#include<iostream>
using namespace std;
int main(){

    char ch='a';
    char *ptr=&ch;

    cout<<ptr<<endl;
    /* in the case of character the implementation of the cout is different therefore the ptr will not return the location 
    in this case rather it will tend to print all the character till it gets the null point */

    ch++;
    cout<<*ptr;

    return 0;
}