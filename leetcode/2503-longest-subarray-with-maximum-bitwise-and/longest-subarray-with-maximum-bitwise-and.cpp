class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_value = *max_element(nums.begin(), nums.end());
        int size = 0, result = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == max_value)size++;
            else size = 0;
            result = max(result,size);
        }

        return result;
    }
};