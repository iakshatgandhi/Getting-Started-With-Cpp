class Solution {
public:
    static constexpr int MOD = 1e9 + 7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> powersOfTwo;
        // Extract all powers of two in n
        for (int i = 0; n > 0; ++i) {
            int lowestOneBit = n & -n; // Get rightmost set bit
            powersOfTwo.push_back(lowestOneBit);
            n -= lowestOneBit; // Remove extracted bit
        }

        vector<int> answer;
        // For each query, compute product in [l, r], modulo MOD
        for (const auto& q : queries) {
            int l = q[0], r = q[1];
            long long prod = 1;
            for (int i = l; i <= r; ++i) {
                prod = (prod * powersOfTwo[i]) % MOD;
            }
            answer.push_back(static_cast<int>(prod));
        }
        return answer;
    }
};