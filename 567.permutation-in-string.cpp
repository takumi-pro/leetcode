/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1_map;
        unordered_map<char, int> window_freq;
        for (auto c : s1) s1_map[c]++;

        bool ans = false;
        int right = 0;
        int left = 0;

        for (right = 0; right < s2.size(); right++) {
            window_freq[s2[right]]++;

            bool flg = false;
            for (auto i : window_freq) {
                if ((s1_map.find(i.first) == s1_map.end() && i.second > 0) ||
                    s1_map.find(i.first) != s1_map.end() &&
                    i.second > s1_map[i.first]
                ) {
                    flg = true;
                    break;
                }
            }

            if (s1_map.find(s2[right]) == s1_map.end() ||
                window_freq[s2[right]] > s1_map[s2[right]] ||
                flg
            ) {
                window_freq[s2[left]]--;
                left++;
            } else if (right - left + 1 == s1.size()) {
                ans = true;
                for (auto s1_i : s1_map) {
                    if (window_freq[s1_i.first] != s1_i.second) {
                        ans = false;
                        break;
                    }
                }
                if (ans) break;                
            }
        }

        return ans;
    }
};
// @lc code=end

