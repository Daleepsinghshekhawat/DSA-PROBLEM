/*
    Problem: Find All Duplicates in an Array
    Platform: LeetCode
    Difficulty: Medium

    Approach:
    - Sort the array
    - Traverse and compare adjacent elements
    - If two consecutive elements are equal, it's a duplicate

    Time Complexity: O(n log n)
    Space Complexity: O(1) (excluding output vector)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        // Sort the array
        sort(nums.begin(), nums.end());

        // Traverse and check adjacent elements
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
