/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char, int> sm;
        // unordered_map<char, int> tm;
        // for (char sc: s) sm[sc]++;
        // for (char tc: t) tm[tc]++;
        // for (char tc: t) {
        //     if (sm[tc] != tm[tc]) return false;
        // }
        // return true;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s != t) return false;
        return true;
    }
};
// @lc code=end

