/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
      vector<char> stack;
        if (s.size()%2 != 0) return false;
        for (char c : s) {
          stack.push_back(c);
          if (stack.size() == 2) {
            string str(stack.begin(), stack.end());
            if (
              str != "()" ||
              str != "{}" ||
              str != "[]"
            ) {
              return false;
            };
            stack.clear();
          }
        }
        return true;
    }
};
// @lc code=end

