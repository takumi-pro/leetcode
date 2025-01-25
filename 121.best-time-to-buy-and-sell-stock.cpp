/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 1) return 0;

        set<int> diff;

        // 現在の買い値
        int current_min = prices[0];
        // 現在の売り値
        int current_max = 0;
        for (int i=1; i<n; i++) {           
            // 差分を求めて次のwindowに移る
            if (current_max > 0 && prices[i] < current_min) {
                int d = current_max - current_min;
                diff.insert(d);
                current_min = prices[i];
                current_max = 0;
                continue;
            }

            // 買い値の更新
            if (prices[i] < current_min) {
                current_min = prices[i];
                continue;
            }

            if (prices[i] > current_min && prices[i] > current_max) {
                current_max = prices[i];
                continue;
            }
        }
   
        int d = current_max - current_min;
        diff.insert(d < 0 ? 0 : d);
        return *diff.rbegin();
    }
};
// @lc code=end

