class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int capSum=0;
        int windowSize = INT_MAX;
        int i=0;
        int j=0;
        while(j<nums.size()){
            capSum+=nums[j];
            while(capSum>=target){
                windowSize=min(windowSize,j-i+1);
                capSum-=nums[i];
                i++;
            }
            j++;
        }
        return windowSize==INT_MAX?0:windowSize;
    }
};