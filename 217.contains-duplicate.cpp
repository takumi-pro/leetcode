/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for (const auto& n: nums) {
            if (us.contains(n)) return true;
            us.insert(n);
        }
        return false;
    }
};
// @lc code=end

