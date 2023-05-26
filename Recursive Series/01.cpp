#include<iostream>
using namespace std;
/*
int factorial(int n){
    if(n==0)
        return 1;
    // base condition of the recursive function.
    // recursive function for the factorial is   f(n)=n*f(n-1)

    int part = factorial(n-1);
    int whole = n * part;
    return whole;
}
*/

int factorial(int n){                    // more organized 
    if(n==0)          
        return 1;

    return n * factorial(n-1);
}
int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
}