class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = t.length();
        int result = 0;
        int diff = 0;
        int l=0,r=0;
        while(r<n){
            diff += abs(s[r]-t[r]);
            while(diff>maxCost){
                diff -= abs(s[l]-t[l]);
                l++;
            }
            result = max(result, r-l+1);
            r++;
        }
        return result;
    }
};