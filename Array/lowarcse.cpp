#include<iostream>
using namespace std;

char inLowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
int main(){
    char a;
    cin>>a;

    cout<<"to lower case "<<inLowercase(a)<<endl;
}