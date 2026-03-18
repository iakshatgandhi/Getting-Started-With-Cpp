class Solution {
public:
    long long findHour(vector<int>& piles, int k){
        long long totalHour = 0;
        for(int i=0;i<piles.size();i++){
            totalHour += ((long long)piles[i] + k - 1) / k;
        }
        return totalHour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxK = *max_element(piles.begin(),piles.end());
        int s=1,e=maxK;
        int k=maxK;
        while(s<=e){
            int mid = s+(e-s)/2;
            long long reqHour = findHour(piles,mid);
            if(reqHour<=h){
                k=mid;
                e=mid-1;
            }else s=mid+1;
        }
        return k;
    }
};