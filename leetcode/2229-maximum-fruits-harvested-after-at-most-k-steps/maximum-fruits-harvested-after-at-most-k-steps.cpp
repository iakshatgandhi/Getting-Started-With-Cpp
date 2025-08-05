class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        vector<int> prefixSum(n);
        vector<int> positions(n);
        for(int i=0;i<n;i++){
            positions[i] = fruits[i][0];
            prefixSum[i] = fruits[i][1] + (i>0 ? prefixSum[i-1] : 0);
        }
        int maxfruits = 0;
        for(int d=0;d<=k/2;d++){
            // towards left
            int i = startPos - d;
            int j = startPos + (k-2*d);

            int left = lower_bound(begin(positions), end(positions),i)-begin(positions);
            int right = upper_bound(begin(positions), end(positions),j)-begin(positions)-1;
            
            if(left<=right){
                int total = prefixSum[right] - (left>0 ? prefixSum[left-1] : 0);
                maxfruits = max(maxfruits, total);
            }

            // towards right 
            j = startPos + d;
            i = startPos - (k-2*d);

            left = lower_bound(begin(positions), end(positions),i)-begin(positions);
            right = upper_bound(begin(positions), end(positions),j)-begin(positions)-1;
            
            if(left<=right){
                int total = prefixSum[right] - (left>0 ? prefixSum[left-1] : 0);
                maxfruits = max(maxfruits, total);
            }
        }
        return maxfruits;
    }
};