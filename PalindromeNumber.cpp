/*
    LeetCode Problem: Palindrome Number
    Author: Daleep Singh Shekhawat
    Description:
    Given an integer x, return true if x is a palindrome,
    and false otherwise.

    Example:
    Input: 121
    Output: true

    Input: -121
    Output: false
*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;

        long long original = x;
        long long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};

int main() {
    Solution obj;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (obj.isPalindrome(x)) {
        cout << "True (Palindrome)" << endl;
    } else {
        cout << "False (Not a Palindrome)" << endl;
    }

    return 0;
}
