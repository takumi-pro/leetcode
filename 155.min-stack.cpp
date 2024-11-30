/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:

    vector<int> stack;
    vector<int> minStack;

    MinStack() {
        stack.clear();
        minStack.clear();
    }
    
    void push(int val) {
        stack.push_back(val);
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
    }
    
    void pop() {
        if (stack.back() == minStack.back()) {
            minStack.erase(minStack.end() - 1);
        }
        stack.erase(stack.end() - 1);

    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return minStack.back();      
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

