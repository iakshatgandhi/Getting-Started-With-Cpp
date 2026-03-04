class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> prevIdx;
        prevIdx[0]=-1;
        int currSum = 0;
        int maxSize = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) currSum-=1;
            else currSum+=nums[i];

            if(prevIdx.find(currSum)!=prevIdx.end()){
                maxSize=max(maxSize,i-prevIdx[currSum]);
            }else {
                prevIdx[currSum] = i;
            }
        }
        return maxSize;
    }
};