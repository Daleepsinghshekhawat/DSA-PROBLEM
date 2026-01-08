// File: ThreeSumClosest.cpp
// Author: Your Name
// Description: Finds the sum of three integers in an array closest to a target value.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int Sum1 = nums[0] + nums[1] + nums[2]; 

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;  
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                // Update Sum1 if this sum is closer to target
                if (abs(sum - target) < abs(Sum1 - target)) {
                    Sum1 = sum;
                }

                if (sum == target) {
                    return target; 
                } else if (sum < target) {
                    ++left; 
                } else {
                    --right;
                }
            }
        }
        return Sum1;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = sol.threeSumClosest(nums, target);
    cout << "Closest sum to " << target << " is: " << result << endl;

    return 0;
}
