#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 1; // over 0 1 is returned not printed
    }
    cout<<n<<" ";
    return print(n-1);
}
int main(){
    int n;
    cin>>n;

    print(n);
} 