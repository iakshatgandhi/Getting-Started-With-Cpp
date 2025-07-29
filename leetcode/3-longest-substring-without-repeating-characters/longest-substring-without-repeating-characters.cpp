class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        for (int i = 0; i < s.length(); i++) {
            unordered_map<char, int> track; // Reset for each starting i!
            for (int j = i; j < s.length(); j++) {
                if (track.find(s[j]) != track.end()) {
                    break; // repeated character found!
                }
                track[s[j]] = 1; // mark as seen
                maxlen = max(maxlen, j - i + 1);
            }
        }
        return maxlen;
    }
};
