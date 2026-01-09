// SecondLargestElement.cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        if (arr.size() < 2)
            return -1;

        int largest = INT_MIN;
        int second = INT_MIN;

        for (int x : arr) {
            if (x > largest) {
                second = largest;
                largest = x;
            }
            else if (x > second && x < largest) {
                second = x;
            }
        }

        return (second == INT_MIN) ? -1 : second;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {10, 5, 20, 8};
    int result = sol.getSecondLargest(arr);

    if (result == -1)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element is: " << result;

    return 0;
}
