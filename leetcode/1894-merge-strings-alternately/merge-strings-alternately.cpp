class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i=0, j=0;
        while(i<word1.length() && j<word2.length()){
            result.push_back(word1[i]);
            result.push_back(word2[j]);
            i++;
            j++;
        }
        result += word1.substr(i);
        result += word2.substr(j);
        return result;
    }
};