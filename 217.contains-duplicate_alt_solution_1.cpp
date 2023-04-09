/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    // 重複をなくすアプローチ
    // setを使用する
    set<int>set_nums(nums.begin(), nums.end());
    if (nums.size() == set_nums.size()) return false;
    return true;
  }
};
// @lc code=end

