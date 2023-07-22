#include<iostream>
using namespace std;

bool checkPalindrome(string& str){
    int n = str.length();
    int i = 0;
    int j = n-1;
    for(int i=0;i<=n/2;i++){
        if(str[i]!=str[j--]){
            return 0;
        }
    }
    return 1;
}

int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;

    bool ans = checkPalindrome(str);
    if(ans){
        cout<<"palindrome";
    }else{
        cout<<"is not";
    }
    return 0;
}