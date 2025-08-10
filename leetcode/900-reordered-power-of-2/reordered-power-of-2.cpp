class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string target = sortDigits(n);
        for (int i = 0; i < 31; ++i) {
            string powerOfTwo = sortDigits(1 << i);
            if (powerOfTwo == target) return true;
        }
        return false;
    }
    
private:
    string sortDigits(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        return s;
    }
};