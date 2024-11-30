/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:
    
    vector<int> stack;

    MinStack() {
    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();    
    }
    
    int top() {
        return stack.back();    
    }
    
    int getMin() {
        int min = stack[0];
        for (int i = 0; i < stack.size(); i++) {
            if (min > stack[i]) min = stack[i];
        }  
        return min;
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

