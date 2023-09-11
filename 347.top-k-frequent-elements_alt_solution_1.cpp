/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
    pair<int, int> p;
    set<int> sn(nums.begin(), nums.end());
    for (int n : nums) {
      um[n]++;
    }

    vector<pair<int, int>> pa;
    for (auto item : um) {
      pa.emplace_back(item);
    }

    sort(pa.begin(), pa.end(),
    [](const auto x, const auto y) {return x.second > y.second;});

    vector<int> ans;
    for (int i = 0; i < k; i++) {
      ans.push_back(pa[i].first);
    }
    return ans;
    }
  }
};
// @lc code=end

