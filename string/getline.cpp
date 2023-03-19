#include<iostream>
#include<string>
using namespace std;  

int main()  
{  
    string str; 
    
    cout << "Enter the string as an input:";

    getline(cin, str); // implementing a getline() function 
    // The user input will be stored in the str variable 

    cout << "The entered string was:" << endl;
     
    cout << str << endl; 

    string str2;

    cout << "Enter the string as an input:";

    getline(cin, str2, 'b');  //here the third portion is called the delimiter

    cout << str2 << endl;
}  