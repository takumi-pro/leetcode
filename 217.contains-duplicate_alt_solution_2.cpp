/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    set<int> n(nums.begin(), nums.end());
    if (nums.size() == n.size()) return false;
    return true;
  }
};
// @lc code=end

