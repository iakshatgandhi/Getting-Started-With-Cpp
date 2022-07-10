/*
A for loop is a programming language statement which allows code to be repeatedly executed.

A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers, a and b, where (a<=b), separated by a newline.

Output Format
img. [https://github.com/iakshatgandhi/Cpp-coding-/blob/5f881e2ff43dc06f50300f21caa7a26525efa8fe/Screenshot%202022-07-10%20171039.png](URL)
Sample Input

8
11
Sample Output

eight
nine
even
odd
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
    if(i==1){
    cout<<"one"<<endl;
    }
    else if(i==2){
        cout<<"two"<<endl;
    }
    else if(i==3){
        cout<<"three"<<endl;
    }
    else if(i==4){
        cout<<"four"<<endl;
    }
    else if(i==5){
        cout<<"five"<<endl;
    }
    else if(i==6){
        cout<<"six"<<endl;
    }
    else if(i==7){
        cout<<"seven"<<endl;
    }
    else if(i==8){
        cout<<"eight"<<endl;
    }
    else if(i==9){
        cout<<"nine"<<endl;
    }
    else if(i%2==0){
           cout<<"even"<<endl; 
        }
    else{
        cout<<"odd"<<endl;
    }
        
}  
    return 0;
}
