#include<iostream>
using namespace std;

char* reverse(char name[],int len){
    char* test=new char[len];
    for(int i=0;i<len;i++){
        test[i]=name[len-i-1];
    }
    return test;
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    cout<<"enter the word ";
    char word[20];
    cin>>word;
    int len=getLength(word);

    char* test=reverse(word,len);
    bool value=true;
    for(int i=0;word[i]!='\0';i++){
        if(word[i]!=test[i]){
            value=false;
            break;
        }
    }
    if(value){
        cout<<"is palindrome ";
    }else
    cout<<"not palindrome";
}