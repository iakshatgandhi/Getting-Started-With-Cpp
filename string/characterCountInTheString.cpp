#include<iostream>
using  namespace std;

char getMaxOccCharacter(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int indexUpdate=0;
        if(ch>='a'&&ch<='z'){
            indexUpdate = ch-'a';
        }else{
            indexUpdate = ch-'A';
        }
        arr[indexUpdate]++;
    }//array of count referring to the 
//max number of alphabets is created
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi < arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a' + ans;
}

int main(){
    string s;
    cin>>s;

    cout<<getMaxOccCharacter(s);
}