/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i=0; i<n-2; i++) {
            for (int j=i+1; j<n-1; j++) {
                for (int k=j+1; k<n; k++) {
                    if (nums[i]+nums[j]+nums[k] == 0) {
                        ans.push_back({ nums[i], nums[j], nums[k] });
                    }
                }
            }
        }

        return ans;
    }
};
// @lc code=end

