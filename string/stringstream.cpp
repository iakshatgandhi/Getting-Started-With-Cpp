#include <iostream>
#include <sstream>
#include<string>
using namespace std;
 
int totalWords(string str)
{
    // Used for breaking input into words
    stringstream new_str(str);
   
    // To store individual words
    string word;
 
    // used to count the total number of words in a given string
    int count = 0;
    
    // >> operator allows us to read from the stringstream object
    while (new_str >> word)
    {
        count++;
    }
    cout<<word<<endl;//just to clarify its holding the single words strings
    return count;
}
 
int main()
{
    string str = "I am here to learn stringstream";
    
    int count = totalWords(str);
    
    cout << "Total number of words in a given string are:" << " " << count << endl;
}
