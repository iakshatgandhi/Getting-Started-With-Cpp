class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<bool> used(n, false);  // tracks which baskets are used
        int unplaced = n;  // assume all fruits are unplaced initially
        
        for (int i = 0; i < n; ++i) {
            int fruit = fruits[i];
            for (int j = 0; j < n; ++j) {
                if (!used[j] && baskets[j] >= fruit) {
                    used[j] = true;
                    unplaced--;
                    break;  // move to next fruit
                }
            }
        }
        return unplaced;
    }
};