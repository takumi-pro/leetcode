/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> check(128, 0);
        for (char c : S) {
          int c_i = 0+c;
          check[c_i]++;
        }

        for (int i = 0; i < S.size(); i++) {
          int c_i = 0+S[i];
          if (check[c_i] == 1) return i;
        }
        return -1;
    }
};
// @lc code=end

