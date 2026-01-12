#include <bits/stdc++.h>
using namespace std;

/*
 LeetCode 121: Best Time to Buy and Sell Stock

 You are given an array prices where prices[i] is the price of a given stock on the ith day.
 You want to maximize your profit by choosing a single day to buy one stock
 and choosing a different day in the future to sell that stock.

 Time Complexity: O(n)
 Space Complexity: O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};

int main() {
    // Example input
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution sol;
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;

    return 0;
}
