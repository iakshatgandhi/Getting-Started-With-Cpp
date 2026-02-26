class Solution {
public:
    bool vCheck(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int i=0;
        int maxVol = 0;
        int count = 0;
        while(i<k){
            if(vCheck(s[i])) count++;
            i++;
        }
        maxVol = count;
        while(i<s.length()){
            if(vCheck(s[i])) count++;
            if(vCheck(s[i-k])) count--;
            i++;

            maxVol = max(maxVol,count);
            if(maxVol == k) return maxVol;
        }
        return maxVol;
    }
};