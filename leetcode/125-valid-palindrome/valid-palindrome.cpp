class Solution {
public:

    char toLowercase(char ch){
        if(ch>='a'&&ch<='z'){
            return ch;
        }else{
           return ch-'A'+'a';
        }
    }
    bool check(char ch){
        if((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;

        while(start<end){
            if(!check(s[start])){
                start++;continue;
            }
            if(!check(s[end])){
                end--;continue;
            }
            if(toLowercase(s[start])!=toLowercase(s[end])){
                return 0;
            }else {
                    start++;
                    end--;
                }
        }
        return 1;
    }
};