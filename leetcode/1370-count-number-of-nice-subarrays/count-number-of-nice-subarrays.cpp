class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> prevSum;
        int count = 0;
        prevSum[0]=1;
        int currSum = 0;
        for(int i=0;i<nums.size();i++){
            (nums[i]%2==0)?currSum+=0:currSum+=1;
            if(prevSum.find(currSum-k)!=prevSum.end()){
                count+=prevSum[currSum-k];
            }
            prevSum[currSum]++;
        }
        return count;

    }
};