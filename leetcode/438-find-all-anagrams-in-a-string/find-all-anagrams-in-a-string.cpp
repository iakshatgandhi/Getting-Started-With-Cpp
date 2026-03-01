class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if(s.length()<p.length()) return result;
        unordered_map<char,int> track;
        for(auto it:p) track[it]++;
        int l=0,r=0;
        int count = p.length();
        while(r<s.length()){
            if(track[s[r]]>0){
                count--;
            }
            track[s[r]]--;
            r++;

            if(count==0) result.push_back(l);

            if(r-l==p.length()){
                if (track[s[l]] >= 0) {
                    count++;
                }
                track[s[l]]++;
                l++;
            }
        }
        return result;
    }
};