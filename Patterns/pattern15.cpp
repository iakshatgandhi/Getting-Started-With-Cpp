// PS C:\Users\busin\OneDrive\Documents\Getting Started With C++\Patterns> cd "c:\Users\busin\OneDrive\Documents\Getting Started With C++\Patterns\" 
// ; if ($?) { g++ pattern15.cpp -o pattern15 } ; if ($?) { .\pattern15 }
// 3
// 1 2 3 
// 2 3 4
// 3 4 5



// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,count;
//     cin>>n;
//     i=1;
//     while(i<=n){
//         count=i;
//         for(j=1;j<=n;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
// int i,j,n,a;
// cin>>n;
// i=1;
// while(i<=n){
//     j=1;
//     a=i;
//     while(j<=n){
//         cout<<a;
//         a++;
//         j++;
//     }
//     i++;
//     cout<<endl;
// }
// }

#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n;
    i=1;
    a=n;
    while(i<=n){
        for(j=i;j<=a;j++){
            cout<<j<<" ";
            
        }
        a=a+1;
        cout<<endl;
        i++;
    }
}