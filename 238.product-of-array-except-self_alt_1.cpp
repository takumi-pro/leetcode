/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int zeroCount = count(nums.begin(), nums.end(), 0);
    if (zeroCount > 1) return vector<int>(nums.size());
    int prod = 1;
    for (int n : nums) {
      if (n) prod *= n;
    }
    for (int& n : nums) {
      if (zeroCount) {
        n = n ? 0 : prod;
      } else {
        n = prod/n;
      }
    }
    return nums;
  }
};
// @lc code=end

