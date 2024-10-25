/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sm;
        vector<vector<string>> results;

        for (string str : strs) {
            string original_str = str;
            sort(str.begin(), str.end());

            sm[str].push_back(original_str);
        }

        for (auto m : sm) {
            results.push_back(m.second);
        }
        return results;
    }
};
// @lc code=end

