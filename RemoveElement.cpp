#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to remove all occurrences of 'val' from the vector 'nums'
    // Returns the new length of the array after removal
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // index to place next non-val element
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;   // number of elements not equal to val
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 2, 3, 4, 2};
    int val = 2;

    int newLength = sol.removeElement(nums, val);

    cout << "Array after removing " << val << ": ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << "\nNew length: " << newLength << endl;

    return 0;
}
