class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxDist = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int low = i, high = nums2.size()-1, output = i;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(nums1[i]<=nums2[mid]){
                    output = mid;
                    low = mid+1;
                }else high = mid-1;
            }
            maxDist = max(maxDist,output-i);
        }
        return maxDist;
    }
};