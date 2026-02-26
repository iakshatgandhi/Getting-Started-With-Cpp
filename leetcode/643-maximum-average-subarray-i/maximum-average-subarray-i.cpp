class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        double avg = 0;
        double sum = 0;
        while(i<k){
            sum=sum+nums[i];
            i++;
        }
        double maxSum = sum;
        while(i<nums.size()){
            sum=sum+nums[i]-nums[i-k];
            if(sum>maxSum)maxSum=sum;
            i++;
        }
        return maxSum/k;
    }
};