/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int max_count = 0;
        int n = s.size();
        int left = 0;
        int right = 0;
        map<char, int> c_count;
        while (right < n) {
            char c = s[right];
            // 初めての文字
            if (c_count.find(c) == c_count.end()) {
                c_count[c] = 1;
                count++;
                max_count = max(max_count, count);
                right++;
            // 既に登場した文字
            } else {
                left++;
                right = left;
                count = 0;
                c_count.clear();
            }
        }

        return max_count;
    }
};
// @lc code=end

