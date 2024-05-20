#include<iostream>
using namespace std;

int fun(int n){
    if(n==1){
        cout << n << " ";
        return 1;
    }
    fun(n-1);
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    return fun(n);
}