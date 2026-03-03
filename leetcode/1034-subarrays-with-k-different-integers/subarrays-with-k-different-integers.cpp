class Solution {
public:
    int subarryTillK(vector<int> nums, int k){
        int l=0,r=0;
        int count = 0;
        unordered_map<int,int> track;
        while(r<nums.size()){
            track[nums[r]]++;

            while(track.size()>k){
                track[nums[l]]--;
                if(track[nums[l]]==0) track.erase(nums[l]);
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarryTillK(nums,k)-subarryTillK(nums,k-1);
    }
};