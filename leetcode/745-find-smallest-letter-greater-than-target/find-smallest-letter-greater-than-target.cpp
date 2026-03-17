class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int s = 0;
        int e = n-1;
        int idx = 0;
        while(s<=e){
            int m = s+(e-s)/2;
            if(letters[m]-'a'>target-'a'){
                idx = m;
                e = m-1;
            } else s=m+1;
        }
        return letters[idx];
    }
};