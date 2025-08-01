class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        for (int i = 0; i < size && n > 0; i++) {
            if (flowerbed[i] == 0) {
                // Check left and right neighbors
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1) || (flowerbed[i + 1] == 0);
                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;  // Plant here
                    n--;
                }
            }
        }
        return n == 0;
    }
};