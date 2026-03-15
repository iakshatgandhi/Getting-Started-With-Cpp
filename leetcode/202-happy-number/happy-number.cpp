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
        int squareSum = sqSum(n);
        track[squareSum]=1;
        int num = 0;
        while(squareSum!=1){
            num = sqSum(squareSum);
            if(track.find(num)!=track.end()) return false;
            track[num]=1;
            squareSum = num;
        }
        return true;
    }
};