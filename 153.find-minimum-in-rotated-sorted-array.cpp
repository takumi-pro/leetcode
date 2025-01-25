/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min_v = nums[0];
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            min_v = min(min_v, nums[mid]);
            min_v = min(min_v, nums[left]);
            min_v = min(min_v, nums[right]);
            if (nums[left] < nums[mid]) {
                left = mid + 1;
            } else {
                min_v = min(min_v, nums[mid]);
                right = mid - 1;
            }
        }
        return min_v;
    }
};
// @lc code=end

