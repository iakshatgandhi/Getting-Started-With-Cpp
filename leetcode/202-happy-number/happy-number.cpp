class Solution {
public:
    int sqSum(int number){
        int sumSq = 0;
        while(number!=0){
            int digit = number%10;
            sumSq = sumSq + digit*digit;
            number/=10;
        }
        return sumSq;
    }
    bool isHappy(int n) {
        unordered_set<int> track;
        while(n!=1){
            n = sqSum(n);
            if(track.find(n)!=track.end()) return false;
            track.insert(n);
        }
        return true;
    }
};