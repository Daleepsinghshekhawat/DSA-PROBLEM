 /*
Problem Name : Move Zeroes

Problem Statement:
Given an integer array nums, move all 0's to the end of the array 
while maintaining the relative order of the non-zero elements.

Note:
You must do this in-place without making a copy of the array.

Example:
Input:  nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

--------------------------------------------------
Approach (Two Pointer Technique):
1. Maintain a pointer 'index' for the position of non-zero elements
2. Traverse the array
3. When a non-zero is found, place it at 'index' and increment index
4. Fill remaining positions with zeroes*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        // Move non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }

        // Fill remaining positions with zeroes
        while (index < nums.size()) {
            nums[index] = 0;
            index++;
        }
    }
};

// Driver code (optional)
int main() {
    Solution sol;
    vector<int> nums = {0,1,0,3,12};

    sol.moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}
