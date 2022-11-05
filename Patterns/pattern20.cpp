/*
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<n-i+j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n;
    for(i=n;i>=1;i--){
        a=i;
        while(a<=n){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        char a='A'+n-i;
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}

