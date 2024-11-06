/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        for (int left = 0, right = height.size()-1; left < right;) {
            int area = (right - left) * min(height[right], height[left]);
            max_area = max(max_area, area);
            if (height[left] > height[right]) right--;
            else left++;
        }
        return max_area;
    }
};
// @lc code=end

