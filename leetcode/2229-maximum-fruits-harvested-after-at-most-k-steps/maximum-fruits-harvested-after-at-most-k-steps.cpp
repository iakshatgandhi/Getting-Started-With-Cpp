class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        // Find the rightmost position we might need.
        int maxRight = max(startPos, fruits.back()[0]);

        vector<int> amounts(maxRight + 2, 0);
        for (const auto& f : fruits)
            amounts[f[0]] = f[1];

        // Build prefix sum to query total fruits in any range.
        vector<int> prefix(maxRight + 3, 0);
        partial_sum(amounts.begin(), amounts.end(), prefix.begin() + 1);

        auto getFruits = [&](int leftSteps, int rightSteps) {
            int l = max(0, startPos - leftSteps);
            int r = min(maxRight, startPos + rightSteps);
            return prefix[r + 1] - prefix[l];
        };

        int ans = 0;
        // Go right first, then left.
        for (int rightSteps = 0; rightSteps <= min(maxRight - startPos, k); ++rightSteps) {
            int leftSteps = max(0, k - 2 * rightSteps);
            ans = max(ans, getFruits(leftSteps, rightSteps));
        }
        // Go left first, then right.
        for (int leftSteps = 0; leftSteps <= min(startPos, k); ++leftSteps) {
            int rightSteps = max(0, k - 2 * leftSteps);
            ans = max(ans, getFruits(leftSteps, rightSteps));
        }
        return ans;
    }
};