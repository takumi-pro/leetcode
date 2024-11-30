/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

/*
* approach
* 1以上の数値が出現したらその数値をstackに入る
* 数値を格納したらindexを進める
* 次にstackのtopの値以上のheightが出現したらindexの距離を計算する
* 計算したindexが水の量となるので足していく
*/

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> s;
        int i = 1;
        int sum = 0;
        s.push(0);
        while (i < height.size()) {
            int d = abs(s.top() - i);
            if (height[s.top()] <= height[i] && d <= 1) {
                s.pop();
                i++;
                continue;
            }
            if (height[i] > 0) {
                if (s.size() && height[s.top()] >= height[i]) {
                    sum += d - 1;
                } else {
                    s.push(i);
                }
            }
            i++;
        }
        return sum;
    }
};
// @lc code=end

