/*
Problem: Find First and Last Position of Element in Sorted Array
Approach: Binary Search
Time Complexity: O(log n)
Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find first occurrence
    int findFirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int first = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                first = mid;
                right = mid - 1; // move left to find earlier occurrence
            } 
            else if (nums[mid] < target) {
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }
        return first;
    }

    // Function to find last occurrence
    int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int last = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                last = mid;
                left = mid + 1; // move right to find later occurrence
            } 
            else if (nums[mid] < target) {
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums, target), findLast(nums, target)};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = sol.searchRange(nums, target);

    cout << "First Position: " << result[0] << endl;
    cout << "Last Position: " << result[1] << endl;

    return 0;
}
