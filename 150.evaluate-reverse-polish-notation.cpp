/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (const auto& c : tokens) {
            if (c == "+" || c == "-" || c == "*" || c == "/") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if (c == "+") s.push(b+a);
                if (c == "-") s.push(b-a);
                if (c == "*") s.push(b*a);
                if (c == "/") s.push(b/a);
                continue;
            }
            s.push(stoi(c));
        }

        return s.top();
    }
};
// @lc code=end

