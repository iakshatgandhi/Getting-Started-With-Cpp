class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prevSum;
        int currSum = 0;
        int count = 0;
        prevSum[0]=1;
        for(int i=0;i<nums.size();i++){
            currSum += nums[i];
            if(prevSum.find(currSum-k)!=prevSum.end()){
                count+=prevSum[currSum-k];
            }
            prevSum[currSum]++;
        }
        return count;
    }
};