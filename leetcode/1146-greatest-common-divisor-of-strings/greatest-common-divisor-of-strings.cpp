class Solution {
public:
    bool division(string s, string t){
        if(s.length() % t.length() != 0) return false;

        string repeated;
        for (int i = 0; i < s.size() / t.size(); ++i)
            repeated += t;
        return repeated == s;

    }
    string gcdOfStrings(string str1, string str2) {
        string result;
        int minlen = min(str1.length(), str2.length());
        for(int i=1;i<=minlen;i++){
            string candidate = str1.substr(0,i);
            if(division(str1,candidate) && division(str2,candidate)){
                result = candidate;
            }
        }
        return result;
    }
};