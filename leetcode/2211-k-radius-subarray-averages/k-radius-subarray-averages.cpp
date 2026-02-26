class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ansArr(nums.size(),-1);
        long long windowSize = 2*k+1;
        if(nums.size()<windowSize)return ansArr;

        long long currentSum = 0;
        for(int i=0;i<windowSize;i++){
            currentSum += nums[i];
        }
        ansArr[k]=currentSum/windowSize;
        for(int i=windowSize;i<nums.size();i++){
            currentSum += nums[i]-nums[i-windowSize];
            ansArr[i - k] = currentSum / windowSize;
        }
        return ansArr;
    }
};