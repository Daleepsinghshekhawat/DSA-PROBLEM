#include <bits/stdc++.h>
using namespace std;

/*
LeetCode: Remove Duplicates from Sorted Array

Input:  nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5
Modified nums = [0,1,2,3,4,_ ,_ ,_ ,_ ,_]
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int k = sol.removeDuplicates(nums);

    cout << "Unique count: " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
