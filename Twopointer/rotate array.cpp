/*
    Problem: Rotate Array
    Link: https://leetcode.com/problems/rotate-array/

    Approach:
    1. Reverse the entire array
    2. Reverse first k elements
    3. Reverse remaining elements

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    sol.rotate(nums, k);

    cout << "Rotated Array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
