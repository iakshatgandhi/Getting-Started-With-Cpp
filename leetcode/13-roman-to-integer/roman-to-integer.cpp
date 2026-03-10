class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> look= {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() && look[s[i+1]]>look[s[i]]){
                total-=look[s[i]];
            }else total += look[s[i]];
        }
        return total;
    }
};