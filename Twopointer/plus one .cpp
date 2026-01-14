// File: plus_one.cpp
// LeetCode 66 - Plus One
// Time Complexity: O(n)
// Space Complexity: O(1) (excluding output)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse from last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If digit is 9, make it 0 and carry forward
            digits[i] = 0;
        }

        // If all digits were 9, add 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution sol;

    vector<int> digits = {1, 2, 3};
    vector<int> result = sol.plusOne(digits);

    cout << "Result: ";
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
