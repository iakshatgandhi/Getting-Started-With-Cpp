#include<iostream>
using namespace std;

char toLowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool check(char ch){
    if(ch>=48 && ch<=57) return false;
    if(ch<65 || ch>122)return true;
    if(ch>90 && ch<97)return true;
    return false;

}
bool isPalindrome(char ch[],int n){
    int s=0;
    int e=n-1;

    while(!(s>e)){
        if(check(ch[s])){
            s++;continue;
        }
        if(check(ch[e])){
            e--;continue;
        }
        if(toLowercase(ch[s])!=toLowercase(ch[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
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

    
    if(isPalindrome(word,len)){
        cout<<"is palindrome ";
    }else
    cout<<"not palindrome";
}