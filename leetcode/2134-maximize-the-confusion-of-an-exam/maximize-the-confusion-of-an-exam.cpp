class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.length();
        int l=0,r=0;
        unordered_map<char,int> track;
        int maxFreq = 0;
        int result = 0;
        while(r<n){
            track[answerKey[r]]++;
            maxFreq = max(maxFreq,track[answerKey[r]]);
            if(((r-l+1)-maxFreq)>k){
                track[answerKey[l]]--;
                l++;
            }
            result = max(result,r-l+1);
            r++;
        }
        return result;
    }
};