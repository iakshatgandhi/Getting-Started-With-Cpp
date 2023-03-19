#include <bits/stdc++.h>
using namespace std;

void reverseStr(string& str)  //passing string by reference
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


void reverse(string str)   // second approach
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

int main()
{
    string str = "abcde";
    reverseStr(str);
    cout << str;
    return 0;
}