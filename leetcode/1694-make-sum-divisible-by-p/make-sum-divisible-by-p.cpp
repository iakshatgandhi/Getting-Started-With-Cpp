class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long totalSum = 0;
        for (int n : nums) totalSum += n;
        int target = totalSum % p;
        if (target == 0) return 0;
        
        unordered_map<int, int> lastIdx;
        lastIdx[0] = -1;
        
        int currRem = 0;
        int minLen = nums.size();
        
        for (int i = 0; i < nums.size(); ++i) {
            currRem = (currRem + nums[i]) % p;
            int needed = (currRem - target + p) % p;
            
            if (lastIdx.find(needed) != lastIdx.end()) {
                minLen = min(minLen, i - lastIdx[needed]);
            }
            
            lastIdx[currRem] = i;
        }
        return (minLen == nums.size()) ? -1 : minLen;
    }
};