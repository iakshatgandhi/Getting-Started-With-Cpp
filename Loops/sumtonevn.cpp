#include<iostream>
using namespace std;
 int main(){
   int i,n,sum=0;
   cout<<"enter the number";
   cin>>n;
   for(i=0;i<=n;i++){
    if(i%2==0){
        sum=sum+i;
    }
    else{
        continue;
    }
   }
   cout<<"the sum to "<<n<<" even numbers is:- "<<sum;
   return 0;
}