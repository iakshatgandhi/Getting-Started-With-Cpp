class Solution {
public:
    int nCr(int row, int col){
        int result=1;
        for(int i=0;i<col;i++){
            result = result * (row-i);
            result = result / (i+1);
        }
        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1;i<=numRows;i++){
            vector<int> temp;
            for(int j=1;j<=i;j++){
                temp.push_back(nCr(i-1, j-1));
            }
            res.push_back(temp);
        }
        return res;
    }
};