/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      set<int> sn(nums.begin(), nums.end());
      vector<int> vn(sn.begin(), sn.end());
      sort(vn.begin(), vn.end());

      if (!vn.size()) return 0;

      int max_c = 0;
      int max_resu = 0;
      for (int i = 1; i < vn.size(); i++) {
        int diff = abs(vn[i - 1] - vn[i]);
        if (diff == 1) max_c++;
        else max_c = 0;
        max_resu = max(max_resu, max_c);
      }
      return max_resu + 1;
    }
};
// @lc code=end

