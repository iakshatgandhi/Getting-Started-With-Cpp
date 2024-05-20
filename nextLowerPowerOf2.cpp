#include <iostream>

int nextLowerPowerOf2(int n) {
    if (n <= 0) {
        return 0;  // Handle non-positive inputs
    }

    // Find the most significant bit (MSB) position
    int msbPos = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i)) != 0) {
            msbPos = i;
            break;
        }
    }

    // Set all bits to the right of MSB to 0 to get the next lower power of 2
    return (1 << msbPos);
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = nextLowerPowerOf2(n);

    std::cout << "Next lower power of 2 for " << n << " is: " << result << std::endl;

    return 0;
}


