/*
    Problem: Kth Largest Element in an Array

    Approach: Sorting
    - Sort the array in ascending order
    - Return element at index (n - k)

    Time Complexity: O(n log n)
    Space Complexity: O(1) or O(n) depending on sorting method
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    cout << "Kth Largest Element: "
         << obj.findKthLargest(nums, k) << endl;

    return 0;
}
