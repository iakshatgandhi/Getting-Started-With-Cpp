#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    do{
        cout<<n<<endl;
        cout<<"enter the second number";
        cin>>n; 
    }while(n>0);
    return 0;
}