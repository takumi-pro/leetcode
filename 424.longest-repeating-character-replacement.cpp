/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int max_length = 0;
        int kn = k;

        while (right < s.size()) {
            if (s[left] != s[right]) {
                if (k > 0) {
                    if (right == s.size() - 1) {
                        max_length = max(max_length, right - left + 1);
                        k = kn;
                        break;
                    }
                    k--;
                    right++;
                } else {
                    max_length = max(max_length, right - left);
                    left++;
                    right = left;
                    k = kn;
                }
            } else {
                right++;
                if (right == s.size()) {
                    max_length = max(max_length, right - left);
                }
            }
        }

        cout << "left: " << left << ", right: " << right << ", k: " << k << endl;

        if (k > 0) {
            int last_max_length = (right - left + k) > s.size() ? s.size() : right - left + k;
            max_length = max(max_length, last_max_length);
            // max_length = max(max_length, right - left + k);
        }
        return max_length;
    }
};
// @lc code=end

