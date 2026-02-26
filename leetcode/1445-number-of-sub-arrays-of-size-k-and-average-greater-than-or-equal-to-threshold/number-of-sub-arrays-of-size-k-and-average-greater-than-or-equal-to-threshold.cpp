class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0;
        double avg = 0;
        int sum = 0;
        int count=0;
        while(i<k){
            sum+=arr[i];
            i++;
        }
        while(i<=arr.size()){
            avg = sum/k;
            if(avg>=threshold){
                count++;
            }
            if(i<arr.size()){
                sum=sum+arr[i]-arr[i-k];
            }
            i++;
        }
        return count;
    }
};