/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for (const auto& n : nums) {
            um[n]++;
        }

        vector<int> ans;
        
    }
};
// @lc code=end

