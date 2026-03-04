class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> remIdx;
        remIdx[0]=-1;
        int rem = 0;
        int width = 0;
        int currSum = 0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            rem = currSum%k;
            if(remIdx.find(rem)!=remIdx.end()){
                width = i-remIdx[rem];
                if(width >= 2) return  1;
            }
            else remIdx[rem]=i;
        }
        return 0;
    }
};