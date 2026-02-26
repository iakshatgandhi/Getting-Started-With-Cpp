class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int alreadySatis = 0;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0){
                alreadySatis += customers[i];
            }
        }

        int extraSatis = 0;
        int i=0;
        while(i<minutes){
            if(grumpy[i]==1){
                extraSatis += customers[i];
            }
            i++;
        }
        int maxSatis = extraSatis;
        while(i<customers.size()){
            if(grumpy[i]==1){
                extraSatis += customers[i];
            }
            if(grumpy[i - minutes] == 1) extraSatis -= customers[i - minutes];
            maxSatis = max(extraSatis,maxSatis);
            i++;
        }
        return maxSatis+alreadySatis;
    }
};