#include<bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // take or not take
    ds.push_back(arr[ind]);
    printF(ind+1, ds, arr, n);
    ds.pop_back();
    printF(ind+1, ds, arr, n);
}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printF(0, ds, arr, n);
}

// complexities 
// time: O(2^n)*n   //every space has 2 possiblities and there is a for loop to print the subsequence 
// space: O(n)      //depth of recursion tree