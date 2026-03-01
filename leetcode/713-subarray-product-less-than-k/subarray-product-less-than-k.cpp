class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,r=0;
        int result = 0;
        int prod = 1;
        while(r<nums.size()){
            prod=prod*nums[r];
            while(prod>=k && l<=r){
                prod/=nums[l];
                l++;
            }
            result += (r - l + 1);
            r++;
        }
        return result;
    }
};