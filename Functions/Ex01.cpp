#include<iostream>
using namespace std;

int power(int num1, int num2){
        int ans=1;
        for(int i=1;i<=num2;i++){
            ans=ans*num1;
        }
        cout<< num1 << " raise to the power "<< num2 <<" is: "<<ans;
    }

int main(){
    int a,b;
    cin>>a>>b;
    power(a,b);

    return 0;
}