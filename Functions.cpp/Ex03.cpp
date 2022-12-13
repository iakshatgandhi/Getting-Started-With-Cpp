/*
nCr = !n / !r*!(n-r)
*/

#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int dino = factorial(r)*factorial(n-r);

    float ans=num/dino;
    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<"answer is "<<nCr(n,r)<<endl;

}