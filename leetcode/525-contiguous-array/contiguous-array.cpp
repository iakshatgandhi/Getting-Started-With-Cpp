class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> prevIdx;
        prevIdx[0]=-1;
        int currSum =0;
        int maxLen = 0;
        for(int i=0;i<nums.size();i++){
            (nums[i]==0)?currSum-=1:currSum+=nums[i];
            if(prevIdx.find(currSum)!=prevIdx.end()){
                maxLen = max(maxLen,i-prevIdx[currSum]);
            }else prevIdx[currSum]=i;
        }
        return maxLen;
    }
};