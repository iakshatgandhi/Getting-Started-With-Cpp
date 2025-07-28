class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        int len = gcd(str1.size(), str2.size());
        return str1.substr(0, len);
    }
};




//If a string x repeats m times to form str1 and n times to form str2,

//Then x’s length is the GCD of the lengths of str1 and str2.

// Using __gcd from <numeric> (C++17+):