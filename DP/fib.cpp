#include<iostream>
#include<vector>
using namespace std;
int fib(vector<int> &dp,int n){
    if(n<=1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = fib(dp,n-1)+fib(dp,n-2);
}

int fib2(int n){   // another way
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int fib3(int n){   // another way
    int prev = 1;
    int prev2 = 0;
    int cur;
    for(int i=2;i<=n;i++){
        cur = prev + prev2;
        prev2 = prev;
        prev = cur;
    }
    return cur;
}

int main(){
    int n;
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<fib(dp,n);
    cout<<endl;
    cout<<fib2(n);
    cout<<endl;
    cout<<fib3(n);

    return 0;
}