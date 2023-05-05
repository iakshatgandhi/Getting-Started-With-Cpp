#include<iostream>
#include<math.h>
using namespace std;

    int setBits(int num){
        int i=0,ans=0,count=0;
        while(num!=0){
            int bit = num & 1;
            ans=(bit*pow(10,i))+ans;
            num=num>>1;
            i++;
        }
        while(ans!=0){
            int digit=ans%10;
            if(digit==1){
                count++;
            }
            ans=ans/10;
        }
        return count;
    }
    int main(){
        int a,b;
        cin>>a>>b;

        cout<<"the total number of Set Bytes are "<<setBits(a) + setBits(b);
}