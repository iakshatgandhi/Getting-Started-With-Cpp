class Solution {
public:
    int bSearch(vector<int>& nums,int target,bool isfirst){
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                if(isfirst){
                    end = mid -1;
                }else start = mid +1;
            }else if(nums[mid]>target) end=mid-1;
            else start = mid +1;

            mid = start+(end-start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {bSearch(nums,target, true),bSearch(nums,target, false)};
    }
};