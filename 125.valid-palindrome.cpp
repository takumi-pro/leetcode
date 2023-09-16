/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        auto it = remove_if(s.begin(), s.end(), [](char const &c) {
            return !isalnum(c);
        });
        s.erase(it, s.end());

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int max_i = s.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s[max_i - i]) return false;
        }
        return true;
    }
};
// @lc code=end

