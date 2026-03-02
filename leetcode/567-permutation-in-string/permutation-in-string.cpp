class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length())return 0;
        unordered_map<char,int> track;
        for(auto it:s1) track[it]++;
        int l=0,r=0;
        int count = s1.length();
        while(r<s2.length()){
            if(track[s2[r]]>0){
                count--;
            }
            track[s2[r]]--;
            r++;

            if(count == 0) return 1;

            if(r-l==s1.length()){
                if(track[s2[l]]>=0){
                    count++;
                }
                track[s2[l]]++;
                l++;
            }
        }
        return 0;
    }
};