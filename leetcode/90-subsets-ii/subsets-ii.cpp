class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<vector<int>> &result, vector<int> ds){
        result.push_back(ds);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            backtrack(i+1,nums,result,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> ds;
        backtrack(0,nums,result,ds);

        return result;
    }
};