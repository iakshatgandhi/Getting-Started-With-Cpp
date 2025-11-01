class Solution {
public:
    string minWindow(string s, string t) {
        int need[256] = {0}, window[256] = {0};
        for (char c : t) need[c]++; // Frequency of needed characters

        int required = 0; // Unique characters to match from t
        for (int i = 0; i < 256; ++i) if (need[i] > 0) required++;

        int l = 0, r = 0, formed = 0;
        int minLen = INT_MAX, st = 0;
        while (r < s.size()) {
            char c = s[r];
            window[c]++;
            if (need[c] > 0 && window[c] == need[c]) formed++;

            while (formed == required) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    st = l;
                }
                window[s[l]]--;
                if (need[s[l]] > 0 && window[s[l]] < need[s[l]]) formed--;
                l++;
            }
            r++;
        }
        return minLen == INT_MAX ? "" : s.substr(st, minLen);
    }
};