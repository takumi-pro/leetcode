/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    for (int n : nums) m[n]++;

    vector<pair<int, int>> vp;
    for (auto x : m) {
      vp.push_back(make_pair(x.second, x.first));
    }
    sort(vp.rbegin(), vp.rend());

    vector<int> result;
    for (int i = 0; i < k; i++) result.push_back(vp[i].second);
    return result;
  }
};
// @lc code=end

