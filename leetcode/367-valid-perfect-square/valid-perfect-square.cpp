class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return 1;
        int low = 0;
        int high = num/2;
        while(low<=high){
            long long mid = low + (high-low)/2;
            long long sqrt = mid * mid;
            if(sqrt == num) return 1;
            else if(sqrt<num) low=mid+1;
            else high=mid-1;
        }
        return 0;
    }
};