class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,u=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L') l++;
            else if(moves[i]=='R') r++;
            else u++;
        }
        if(l>r) return l+u-r;
        else return r+u-l;
    }
};