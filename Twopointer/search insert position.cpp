// File: search_insert_position.cpp
// LeetCode 35 - Search Insert Position
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            } 
            else if (nums[mid] > target) {
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }
        // Position where target should be inserted
        return low;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << "Insert Position: " << sol.searchInsert(nums, target) << endl;

    return 0;
}
