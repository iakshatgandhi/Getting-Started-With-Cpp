class Solution {
public:
    int binary(const vector<int>& row){
        int s = 0, e = row.size()-1;
        int firstNegative = row.size();
        while(s<=e){
            int mid = s+(e-s)/2;
            if(row[mid]<0){
                firstNegative = mid;
                e=mid-1;
            }else s = mid+1;
        }
        return row.size()-firstNegative;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++){
            count += binary(grid[i]);
        }
        return count;
    }
};