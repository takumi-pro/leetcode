/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0, ans = 0, N = nums.size();

        vector<int> prefix(N);
        prefix[0] = nums[0];
        for (int i = 1; i < N; i++) prefix[i] = nums[i] + prefix[i - 1];

        for (int i = 0; i < N; i++) {
          if (prefix[i] == k) ans++;

          if (mp.find(prefix[i] - k) != mp.end()) {
            ans += mp[prefix[i] - k];
          }
          mp[prefix[i]]++;
        }
        return ans;
    }
};
// @lc code=end

