/*#include<iostream>
using namespace std;
int main(){
int i,b,n,a;
cin>>n;
a=1;
b=1;
while(b<=n){
    for(i=b;i<=a;i++){
        char ch='A'+i-1;
        cout<<ch<<" ";
    }
    cout<<endl;
    a+=2;
    b++;
}
}*/

//using three variables
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            char ch='A'+i+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}