/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      set<int> set_n(nums.begin(), nums.end());
      vector<int> n(set_n.begin(), set_n.end());
      int count=0, max_count=0;

      if (!n.size()) return 0;

      for (int i=1; i<n.size(); i++) {
        int diff = abs(n[i-1] - n[i]);
        if (diff == 1) count++;
        else count = 0;
        max_count = max(max_count, count);
      }
      
      return max_count+1;
    }
};
// @lc code=end

