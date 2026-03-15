class Solution {
public:
    int sqSum(int number){
        int sumSq = 0;
        while(number!=0){
            sumSq = sumSq + pow((number%10),2);
            number/=10;
        }
        return sumSq;
    }
    bool isHappy(int n) {
        unordered_map<int,bool> track;
        while(n!=1){
            n = sqSum(n);
            if(track.find(n)!=track.end()) return false;
            track[n]=1;
        }
        return true;
    }
};