/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> nmap;
    for (int i = 0; i < nums.size(); i++) {
      nmap[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
      int comp = target - nums[i];
      if (nmap.count(comp) && nmap[comp] != i) return {i, nmap[comp]};
    }

    return {};
  }
};
// @lc code=end

