class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> nline;
        long long res = 1;
        nline.push_back(res);
        for(int i=1;i<=rowIndex;i++){
            res = res*(rowIndex-i+1);
            res = res/i;
            nline.push_back(res);
        }
        return nline;
    }
};