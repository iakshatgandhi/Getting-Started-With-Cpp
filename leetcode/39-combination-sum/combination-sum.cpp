class Solution {
public:
    void findCombinations(int idx, int target, vector<int>& candidates, vector<int> &ds, vector<vector<int>> &result){
        if(idx == candidates.size()){
            if(target == 0){
                result.push_back(ds);
            }
            return;
        }

        if(candidates[idx]<=target){
            ds.push_back(candidates[idx]);
            findCombinations(idx,target - candidates[idx], candidates, ds, result);
            ds.pop_back();
        }
        findCombinations(idx + 1, target, candidates, ds, result);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;
        findCombinations(0,target,candidates,ds,result);
        return result;
    }
};