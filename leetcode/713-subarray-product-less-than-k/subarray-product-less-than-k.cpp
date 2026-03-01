class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            int prod = 1;
            for(int j=i;j<nums.size();j++){
                prod = prod*nums[j];
                if(prod<k){
                    result++;
                }else break;
            }
        }
        return result;
    }
};