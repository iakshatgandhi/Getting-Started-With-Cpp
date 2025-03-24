class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return (num % 9 == 0) ? 9 : num % 9;
    }
};

// This means the remainder when a number is divided by 9 is the same as the sum of its digits modulo 9.