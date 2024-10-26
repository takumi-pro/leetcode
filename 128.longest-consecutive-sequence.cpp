/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());

        int count = 1;
        int ans = 1;
        int prev;

        if (n==0) return 0;
        for (const auto& n : s) {
            int diff = abs(prev - n);
            if (diff == 1)
            if (prev) {
                count++;
                ans = max(count, ans);
            } else {
                count = 1;
                prev = false;
            }
            prev = n;
        }

        return ans;
    }
};
// @lc code=end

