#include<stack>
class Solution {
public:
    string removeOuterParentheses(string s) {
    string ans;
    stack<char> st;
    
    for (char c : s) {
        if (c == '(') {
            if (!st.empty()) ans += c;
            st.push(c);
        } else {
            st.pop();
            if (!st.empty()) ans += c;
        }
    }
    return ans;
    }
};