class Solution {
public:
static const int MOD = 1e9 + 7;
    vector<vector<int>> memo;

    int dfs(int currNum, int target, int x) {
        if (target == 0) return 1;              // Found a valid combination
        if (target < 0 || pow(currNum, x) > target) return 0;

        if (memo[currNum][target] != -1) 
            return memo[currNum][target];

        int ways = 0;
        long long p = pow(currNum, x);

        // Option 1: take current number
        if (p <= target) {
            ways = (ways + dfs(currNum + 1, target - p, x)) % MOD;
        }

        // Option 2: skip current number
        ways = (ways + dfs(currNum + 1, target, x)) % MOD;

        return memo[currNum][target] = ways;
    }
    int numberOfWays(int n, int x) {
        memo.assign(n + 1, vector<int>(n + 1, -1));
        return dfs(1, n, x);
    }
};