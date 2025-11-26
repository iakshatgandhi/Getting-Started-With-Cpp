class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ans++;
                continue;
            }
            else{
                int j=i+1;
                while(j!=nums.size()){
                    if(nums[i]!=nums[j]){
                        swap(nums[i],nums[j]);
                        ans++;
                        break;
                    }else j++;
                }
            }
        }
        return ans;
    }
};