/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        dfs(0, 0, "", n, ans);
        return ans;
    }

private:
    void dfs(int left, int right, string s, int n, vector<string>& ans) {
        if (s.size() == n * 2) {
            ans.push_back(s);
            return;
        }

        if (left < n) {
            dfs(left + 1, right, s+"(", n, ans);
        }

        if (right < left) {
            dfs(left, right + 1, s+")", n, ans);
        }
    }
};
// @lc code=end

