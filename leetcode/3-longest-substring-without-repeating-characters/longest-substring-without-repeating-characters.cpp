class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int l=0,r=0;
        unordered_map<char, int> track;
        while(r<s.length()) {
            if (track.find(s[r]) != track.end()) {
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
