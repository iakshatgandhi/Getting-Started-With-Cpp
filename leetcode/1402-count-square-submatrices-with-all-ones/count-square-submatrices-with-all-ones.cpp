class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int result = 0;

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (matrix[r][c] == 1 && r > 0 && c > 0) {
                    matrix[r][c] += min({matrix[r-1][c], matrix[r][c-1], matrix[r-1][c-1]});
                }
                result += matrix[r][c];
            }
        }
        return result;
    }
};