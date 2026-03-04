class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> prevSum;
        int count = 0;
        prevSum[0]=1;
        int currSum = 0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            if(prevSum.find(currSum-goal)!=prevSum.end()){
                count+=prevSum[currSum-goal];
            }
            prevSum[currSum]++;
        }
        return count;
    }
};