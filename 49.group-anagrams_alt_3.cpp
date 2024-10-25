/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> my_map;
    for (string s : strs) {
      string tmp = s;
      sort(tmp.begin(), tmp.end());
      my_map[tmp].push_back(s);
    }

    vector<vector<string>> ans;
    for (auto x : my_map) {
      ans.push_back(x.second);
    }
    return ans;
  }
};
// @lc code=end

