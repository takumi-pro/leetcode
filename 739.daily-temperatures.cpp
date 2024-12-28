/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {



        // approach 1
        // time limit exceeded ❌

        // vector<int> ans;
        // int n = temperatures.size();
        // for (int i=0; i<n; i++) {
        //     int date_diff = 0;
        //     for (int j=i+1; j<n; j++) {
        //         if (temperatures[i] < temperatures[j]) {
        //             ans.push_back(date_diff + 1);
        //             break;
        //         } else {
        //             if (j == n-1) ans.push_back(0);
        //             date_diff++;
        //         }
        //     }
        // }
        // ans.push_back(0);
        // return ans;
    }
};
// @lc code=end

