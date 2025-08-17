class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k + maxPts) 
            return 1.0;

        vector<double> dp(k + maxPts, 0.0);
        double windowSum = 0.0;
        double result;

        // Base cases: probability of scores from k to n is 1 (winning states)
        for (int i = k; i <= n && i < k + maxPts; ++i) {
            dp[i] = 1.0;
            windowSum += 1.0;
        }

        // Fill dp array backwards
        for (int i = k - 1; i >= 0; --i) {
            dp[i] = windowSum / maxPts;
            windowSum += dp[i];
            windowSum -= dp[i + maxPts];
        }

        // Result is the probability of starting from 0 points
        result = dp[0];
        return result;
    }
};