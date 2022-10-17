/* #include<iostream>
using namespace std;
int main(){
int i,j,n,a;
cin>>n;
for(i=1;i<=n;i++){
    a=i;

    for(j=1;j<=i;j++){
        cout<<a<<" ";        
        a++;
    }
    cout<<endl;
}
}
*/

#include<iostream>
using namespace std;
int main(){
int i,j,n,a;
cin>>n;
i=1;
while(i<=n){
    a=i;
    j=1;
    while(j<=i){
        cout<<a<<" ";
        a++;
        j++;
    }
    cout<<endl;
    i++;
}
}
