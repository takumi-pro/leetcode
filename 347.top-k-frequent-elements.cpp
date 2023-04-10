/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, vector<int>> m;
    for (int n : nums) {
      m[n].push_back(n);
    }
    vector<vector<int>> ans;
    vector<int> ans_a;
    for (auto x : m) ans.push_back(x.second);
    sort(ans.begin(), ans.end(), [](const auto& a, const auto& b) {
      return a.size() > b.size();
    });
    for (int i=0; i<k; i++) {
      ans_a.push_back(ans[i][0]);
    }
    return ans_a;
  }
};
// @lc code=end

