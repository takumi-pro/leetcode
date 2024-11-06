/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i, j;
        for (i = 0, j = numbers.size()-1; i < j;) {
            if (numbers[i] + numbers[j] == target) break;
            if (numbers[i] + numbers[j] > target) {
                j--;
                continue;
            } else {
                i++;
                continue;
            }
        }
        return {i+1, j+1};
    }
};
// @lc code=end

