/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> amap;
    for (int i = 0; i < strs.size(); i++) {
      string s = strs[i];
      sort(s.begin(), s.end());
      amap[s].push_back(strs[i]);
    }

    vector<vector<string>> result;
    // for (auto itr = amap.begin(); itr != amap.end(); ++itr) {
    //   sort(itr->second.begin(), itr->second.end());
    //   result.push_back(itr->second);
    // }

    // auto x : amapを使えば楽にループできる
    for (auto x : amap) {
      result.push_back(x.second);
    }
    return result;
  }
};
// @lc code=end

