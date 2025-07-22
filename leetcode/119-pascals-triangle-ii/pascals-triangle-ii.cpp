class Solution {
public:
    long long Ncr(int n, int r){
        long long res = 1;
        for(int i=0;i<r;i++){
            res = res*(n-i);
            res = res/(i+1);
        }
        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        for(int i=0;i<=rowIndex;i++){
            int temp = Ncr(rowIndex,i);
            row.push_back(temp);
        }
        return row;
    }
};