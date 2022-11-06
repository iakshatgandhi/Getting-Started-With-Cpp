/*
5
1 2 3 4 5 
  2 3 4 5
    3 4 5
      4 5
        5
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n;
    i=1;
    while(i<=n){
        a=i-1;
        while(a!=0){
            cout<<"  ";
            a--;
        }
        j=i;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=i;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }