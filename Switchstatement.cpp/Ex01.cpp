#include<iostream>
using namespace std;
int main(){
    char Lang;
    cout<<"enter the language code for eng(a), hin(b), arabian(c), russian(d)";
    cin>>Lang;

    switch (Lang)
    {
    case 'a':
        cout<<"HELLO"<<endl;
        break;

    case 'b':
        cout<<"Namaste"<<endl;
        break;

    case 'c':
        cout<<"أهلا"<<endl;
        break;

    case 'd':
        cout<<"привет"<<endl;
        break;

    defaut:
        cout<<"language not supported"<<endl;
        break;
    }
return 0;
}