// memoisation 
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum cost to reach the end using at most 'k' jumps
int solveUtil(int ind, vector<int>& height, vector<int>& dp, int k) {
    if (ind == 0) return 0;
    
    if (dp[ind] != -1) return dp[ind];
    
    int mmSteps = INT_MAX;
    // Loop to try all possible jumps from '1' to 'k'
    for (int j = 1; j <= k; j++) {
        // Ensure that we do not jump beyond the beginning of the array
        if (ind - j >= 0) {
            // Calculate the cost for this jump and update mmSteps with the minimum cost
            int jump = solveUtil(ind - j, height, dp, k) + abs(height[ind] - height[ind - j]);
            mmSteps = min(jump, mmSteps);
        }
    }
    return dp[ind] = mmSteps;
}

int main() {
    vector<int> height{30, 10, 60, 10, 60, 50};
    int n = height.size();
    int k = 2;
    vector<int> dp(n, -1);
    cout << solveUtil(n - 1, height, dp, k) << endl;
    return 0;
}

