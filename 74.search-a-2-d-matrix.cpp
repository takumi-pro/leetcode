/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {

public:
    bool binarySearch(vector<int>& nums, int target, int left, int right) {
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return true;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int left = 0;
        int right = m - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            int n = matrix[mid].size();
            if (matrix[mid][0] <= target && matrix[mid][n-1] >= target) {
                return binarySearch(matrix[mid], target, 0, n - 1);
            } else if (matrix[mid][n-1] < target) {
                left = mid + 1;
            } else if (matrix[mid][0] > target) {
                right = mid - 1;
            }
        }
        return false;
    }
};
// @lc code=end

