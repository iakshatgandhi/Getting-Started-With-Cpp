class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int l=0,r=0;
        int track[255];
        for (int i = 0; i < 255; ++i) {
            track[i] = -1;
        }
        while(r<s.length()) {
            if (track[s[r]] != -1) {
                if(track[s[r]]>=l){
                    l = track[s[r]] + 1;
                }
            }
            maxlen = max(maxlen, r - l + 1);
            track[s[r]] = r;
            r++;
           
        }
        return maxlen;
    }
};
