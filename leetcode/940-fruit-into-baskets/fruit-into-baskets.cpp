class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> basket;
        int left = 0;
        int right = 0;
        int maxPicked = 0;
        while(right<fruits.size()){
            basket[fruits[right]]++;
            if(basket.size()<=2){
                maxPicked = max(maxPicked,right-left+1);
            }else{
                basket[fruits[left]]--;
                if(basket[fruits[left]]==0) basket.erase(fruits[left]);
                left++;
            }
            right++;
        }
        return maxPicked;
    }
};