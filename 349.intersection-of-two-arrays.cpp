/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s_nums1(nums1.begin(), nums1.end());
        set<int> s_nums2(nums2.begin(), nums2.end());

        vector<int> check(1001, false);
        vector<int> ans;
        for (int v1 : s_nums1) check[v1] = true;
        for (int v2 : s_nums2) {
          if (check[v2]) ans.push_back(v2);
        }
        return ans;
    }
};
// @lc code=end

