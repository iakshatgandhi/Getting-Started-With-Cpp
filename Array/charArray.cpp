#include<iostream>
using namespace std;
int main(){
    //initialising nd printing of a char variable and pointer to that char variable 
    char element='a';
    cout << element<<endl;
    char *ptr=&element;
    cout<<ptr<<endl;

    //initialising and printing of char array and printing
    char name[20];
    cout<<"enter name";
    cin>>name;
    cout<<"name is "<<name<<endl;
    cout<<name[2]<<endl;
    name[3]='\0';
    cout<<name<<endl;
    
    // char ch[6] = {"abcde"};
    // char *pt=&ch[0];
    // cout<<pt<<endl;



}