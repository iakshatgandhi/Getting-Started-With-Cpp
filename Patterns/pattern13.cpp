// 5
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E
#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        char ch='A'+j-1;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
} 