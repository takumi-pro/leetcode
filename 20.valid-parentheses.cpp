/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool result = true;
        for (const auto& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) result = false;
                else if (c == ')' && st.top() == '(') st.pop();
                else if (c == '}' && st.top() == '{') st.pop();
                else if (c == ']' && st.top() == '[') st.pop();
                else result = false; 
            }
        }
        if (st.size() > 0) result = false;
        return result;
    }
};
// @lc code=end

