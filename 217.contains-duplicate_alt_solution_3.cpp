/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    // setで重複要素を排除し要素数を比較する
    // 要素数が同じ場合はすべての要素が異なるため偽を返す
    // 要素数が異なる場合は真を返す
    set<int> s(nums.begin(), nums.end());
    int nums_n = nums.size(), s_n = s.size();
    if (nums_n == s_n) return false;
    else return true;
  }
};
// @lc code=end

