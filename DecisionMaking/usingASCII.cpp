#include<iostream>
int main(){
    char ch;
    std::cout<<"enter the character";
    std::cin>>ch;
    if(int(ch)>=48 && int(ch)<=57){
        std::cout<<"this is numeric"<<'\n'<<"ASCII VALUE "<< int(ch);
    }
    else if(int(ch)>=65 && int(ch)<=90){
        std::cout<<"Upper Case"<<'\n'<<"ASCII VALUE "<< int(ch);
    }
    else if(int(ch)>=97 && int(ch)<=122){
        std::cout<<"Lower Case"<<'\n'<<"ASCII VALUE "<< int(ch);
    }
    else{
        std::cout<<"put in the appropriate character";
    }
}