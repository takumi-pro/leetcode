/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        
        string p="";
        // transform(s.begin(), s.end(), ::tolower);
        for (char c : s) {
            if (!isalnum(c)) continue;
            p += tolower(c);
        }

        int n = p.size();
        int ans = true;
        for (int i=0; i<(n)/2; i++) {
            if (p[i] != p[n-i-1]) ans = false;
        }

        return ans;
    }
};
// @lc code=end

