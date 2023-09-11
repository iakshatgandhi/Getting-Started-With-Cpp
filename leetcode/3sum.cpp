// Brute

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    set<vector<int>> cases;
	for(int i=0;i<n;i++){
    
        vector<int> temp;
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==K){
                    temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    cases.insert(temp);
                }
            }
        }
    }
    vector<vector <int> >result (cases.begin(), cases.end());
    return result;
}

// time complexity of the particular solution is O(n^3 + log(no of unique trippets))
// space complexity 2*O(no of trippets)