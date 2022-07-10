/* Basic Data Types
Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value

Reading
To read a data type, use the following syntax:
scanf("`format_specifier`", &val)
For example, to read a character followed by a double:
char ch;
double d;
scanf("%c %lf", &ch, &d);
For the moment, we can ignore the spacing between format specifiers.

Printing
To print a data type, use the following syntax:
printf("`format_specifier`", val)
For example, to print a character followed by a double:
char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);

(Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million
numbers as input and printing a million lines, it is faster to use scanf and printf.)

Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format
Print each element on a new line in the same order it was received as input. Note that the floating point
value should be correct up to 3 decimal places and the double to 9 decimal places.

Sample Input
3 12345678912345 a 334.23 14049.30493

Sample Output
3
12345678912345
a
334.230
14049.304930000

Explanation
Print int ,
followed by long ,
followed by char ,
followed by float ,
followed by double  */

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
} 
int main() {
    string s;
    getline(cin,s);
    vector<string> v=split(s," ");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
