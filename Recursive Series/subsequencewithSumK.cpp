#include<bits/stdc++.h>
using namespace std;

void printS(int idx, int s, int arr[], int n, vector<int> &ds, int sum){
    if(idx == n){
        if(s == sum){
            for(auto it : ds){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    s += arr[idx];
    printS(idx + 1, s, arr, n, ds, sum);
    s -= arr[idx];
    ds.pop_back();
    printS(idx + 1, s, arr, n, ds, sum);
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    int s = 0;
    printS(0,s,arr,n,ds,sum);
}