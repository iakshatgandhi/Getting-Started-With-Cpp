#include<iostream>
using namespace std;

int power( int num, int p){
    if(p == 0){
        return 1;
    }
    return num * power(num, p-1);
}

int main(){
    int a,n;
    cin>>a>>n;
    int ans = power(a,n);

    cout<<ans<<endl;
}