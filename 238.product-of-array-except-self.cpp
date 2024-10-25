/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answers;
        int ans = nums[0];
        for (int i=1; i<nums.size(); i++) {
            
            ans *= nums[i];
        }
    }
};
// @lc code=end

