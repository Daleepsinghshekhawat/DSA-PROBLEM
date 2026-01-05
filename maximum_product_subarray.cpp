/*

Problem: Maximum Product Subarray

Description:
Given an integer array nums, find a contiguous non-empty subarray
within the array that has the largest product.

Example:
Input:  nums = [2,3,-2,4]
Output: 6
Explanation: Subarray [2,3] has the largest product.

Approach:
- Use dynamic programming
- Maintain both maximum and minimum product ending at current index
- Swap when a negative number is encountered

Time Complexity: O(n)
Space Complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            // If current number is negative, swap max and min
            if (nums[i] < 0) {
                swap(maxProd, minProd);
            }

            maxProd = max(nums[i], maxProd * nums[i]);
            minProd = min(nums[i], minProd * nums[i]);

            ans = max(ans, maxProd);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 3, -2, 4};

    cout << "Maximum Product Subarray: "
         << sol.maxProduct(nums) << endl;

    return 0;
}
