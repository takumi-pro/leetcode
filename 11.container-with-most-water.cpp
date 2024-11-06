/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;
        while (left < right) {
            int x = right - left;
            int y = min(height[left], height[right]);
            max_area = max(max_area, x*y);
            if (height[left] < height[right]) left++;
            else right--;
        }

        return max_area;
    }
};
// @lc code=end

