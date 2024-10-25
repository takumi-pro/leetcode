/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (const auto& n: nums) {
            if (s.find(n) != s.end()) return true;
            s.insert(n);
        }
        return false;
    }
};
// @lc code=end

