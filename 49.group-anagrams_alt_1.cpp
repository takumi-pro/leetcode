/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<int>> um;
    int s = strs.size();
    for (int i=0; i<s; i++) {
      string tmp_s = strs[i];
      sort(tmp_s.begin(), tmp_s.end());
      um[tmp_s] = strs[i];
    }

    vector<vector<string>> ans;
    for (auto x : um) {
      ans.push_back(x.second);
    }
    return ans;
  }
};
// @lc code=end

