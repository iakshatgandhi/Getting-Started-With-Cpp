class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0;
        unordered_map<int,int> track;
        int result=0;
        while(r<nums.size()){
            track[nums[r]]++;
            while(track[nums[r]]>k){
                track[nums[l]]--;
                l++;
            }
            result = max(result,r-l+1);
            r++;
        }
        return result;
    }
};