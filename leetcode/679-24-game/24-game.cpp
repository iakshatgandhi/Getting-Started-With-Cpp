#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums(cards.begin(), cards.end());
        return solve(nums);
    }

    bool solve(vector<double> nums) {
        if (nums.size() == 1) {
            return fabs(nums[0] - 24) < 1e-6;
        }
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i == j) continue;
                vector<double> next;
                for (int k = 0; k < nums.size(); ++k)
                    if (k != i && k != j) next.push_back(nums[k]);
                // all possible results with (nums[i], nums[j])
                vector<double> candidates = {
                    nums[i] + nums[j],
                    nums[i] - nums[j],
                    nums[j] - nums[i],
                    nums[i] * nums[j]
                };
                if (fabs(nums[j]) > 1e-6) candidates.push_back(nums[i] / nums[j]);
                if (fabs(nums[i]) > 1e-6) candidates.push_back(nums[j] / nums[i]);
                for (double cand : candidates) {
                    next.push_back(cand);
                    if (solve(next)) return true;
                    next.pop_back();
                }
            }
        }
        return false;
    }
};
