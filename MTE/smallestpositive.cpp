#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// Function to partition positive and non-positive elements
int partition(vector<int>& arr) {
    int idx = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 0) {
            swap(arr[i], arr[idx]);
            ++idx;
        }
    }
    return idx;
}

// Function to find the smallest positive missing number
int firstMissingPositive(vector<int>& arr) {
    int k = partition(arr);   // no of positive elements
    for (int i = 0; i < k; ++i) {
        int val = abs(arr[i]);
        if (val - 1 < k && arr[val - 1] > 0) {
            arr[val - 1] = -arr[val - 1];
        }
    }

    for (int i = 0; i < k; ++i) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }

    return k + 1;
}

int main() {
    vector<int> arr = {2, 3, 7, 6, 8, -1, -10, 15};
    cout << "Smallest positive missing number: " << firstMissingPositive(arr) << endl;
    return 0;
}


