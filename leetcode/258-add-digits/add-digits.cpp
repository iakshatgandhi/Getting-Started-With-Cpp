class Solution {
public:
    int addDigits(int num) { 
        return 1 + (num - 1) % 9;;
    }
};

// This means the remainder when a number is divided by 9 is the same as the sum of its digits modulo 9.