/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ns = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        for (int i = 0; i < ns-2; i++) {
            for (int j = i + 1, k = ns-1;j < k;) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                } else if (sum > 0) {
                    k--;
                } else if (sum < 0 ) {
                    j++;
                }
            }
        };
        
        for (auto it : s) {
            ans.push_back(it);
        }
        
        return ans;
    }
};
// @lc code=end

