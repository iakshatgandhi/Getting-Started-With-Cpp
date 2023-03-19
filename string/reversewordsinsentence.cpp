#include<bits/stdc++.h>
#include <sstream>
using namespace std;
  
void printWords(string str)
{
    string word;
    stringstream iss(str);
  
    while (iss >> word){
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
}

int main()
{
    string str;

    cout << "Enter the string as an input:";

    getline(cin, str);
    printWords(str);
    return 0;
}