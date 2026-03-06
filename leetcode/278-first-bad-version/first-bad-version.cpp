// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(isBadVersion(mid)) end = mid;
            else start = mid +1;

            if(isBadVersion(mid)==true && !isBadVersion(mid -1))
            return mid;
            mid = start + (end-start)/2;
        }
        return 1;
    }
};