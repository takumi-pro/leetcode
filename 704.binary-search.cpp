/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {

// approach1 - implementing binary search
// public:
    // int binary_search(vector<int>& nums, int target, int left, int right, int m) {
    //     if (left > right) return -1;
    //     if (nums[m] > target) {
    //         right = m - 1;
    //         m = (left + right) / 2;
    //         return binary_search(nums, target, left, right, m);
    //     } else if (nums[m] < target) {
    //         left = m + 1;
    //         m = (left + right) / 2;
    //         return binary_search(nums, target, left, right, m);
    //     } else {
    //         return m;   
    //     }
    // }

public:
    int binarySearch(vector<int>& nums, int target, int left, int right) {
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            }
        }
        return -1;
    }

public:
    int search(vector<int>& nums, int target) {

        // approach1 - implemnting binary search
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        return binarySearch(nums, target, left, right);

        // approach2 - using std::upper_bound
        // auto result = upper_bound(nums.begin(), nums.end(), target);
        // if (result != nums.begin() && nums[result - nums.begin() - 1] == target) {
        //     return result - nums.begin() - 1;
        // } else {
        //     return -1;
        // }

        // approach3 - using std::lower_bound
        // auto result = lower_bound(nums.begin(), nums.end(), target);
        // if (result != nums.end() && nums[result - nums.begin()] == target) {
        //     return result - nums.begin();
        // } else {
        //     return -1;
        // }
    }
};
// @lc code=end

