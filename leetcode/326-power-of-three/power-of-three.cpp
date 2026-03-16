class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return 0;
        double x = log10(n)/log10(3);
        return x==(int)x;
    }
};