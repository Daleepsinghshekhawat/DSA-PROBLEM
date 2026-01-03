
/*
    Problem: 4Sum
    -----------------------------------
    Given an array nums of n integers, return all unique quadruplets
    [nums[a], nums[b], nums[c], nums[d]] such that:
        a, b, c, and d are distinct
        nums[a] + nums[b] + nums[c] + nums[d] == target

    Approach:
    - Sort the array
    - Fix first two elements using two loops
    - Use two pointers for remaining two elements
    - Skip duplicates to avoid repeated quadruplets

    Time Complexity: O(n^3)
    Space Complexity: O(1) (excluding result storage)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4) return result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // skip duplicates

                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
