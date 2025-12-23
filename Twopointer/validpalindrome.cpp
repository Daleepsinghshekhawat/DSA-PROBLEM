// LeetCode 125 - Valid Palindrome
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <bits/stdc++.h> // includes everything like iostream, string, cctype
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (!isalnum(s[i])) { i++; continue; }
            if (!isalnum(s[j])) { j--; continue; }
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};

// Optional: main function to test
int main() {
    Solution sol;
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    if (sol.isPalindrome(str)) cout << "Palindrome\n";
    else cout << "Not Palindrome\n";
    return 0;
}