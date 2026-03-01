class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        unordered_map<int,int> track;
        int max_freq = 0;
        int result=0;
        while(r<s.length()){
            track[s[r]]++;
            max_freq = max(max_freq, track[s[r]]);
            if(((r-l+1)-max_freq)>k){
                track[s[l]]--;
                l++;
            }
            result = max(result,r-l+1);
            r++;
        }
        return result;
    }
};