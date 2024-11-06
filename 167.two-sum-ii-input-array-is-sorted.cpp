/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        unordered_map<int, vector<int>> um;

        vector<int> ans(2);
        for (int i=0; i<n; i++) um[numbers[i]].push_back(i+1);
        for (int n : numbers) {
            int diff = target - n;
            if (um.find(diff) != um.end()) {
                ans[0] = um[n][0];
                if (um[n][0] == um[diff][0] && um[diff].size() > 1) ans[1] = um[diff][1];
                else ans[1] = um[diff][0];
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

