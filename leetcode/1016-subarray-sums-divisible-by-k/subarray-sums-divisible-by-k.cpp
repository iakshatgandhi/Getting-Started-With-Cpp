class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> remFreq;
        remFreq[0]=1;
        int currSum = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            int rem = currSum%k;
            if(rem<0) rem=rem+k;
            if(remFreq.find(rem)!=remFreq.end()){
                count+=remFreq[rem];
            }
            remFreq[rem]++;
        }
        return count;
    }
};