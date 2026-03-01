/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue {
    stack<int> inSt;
    stack<int> outSt;

    void move() {
        if(outSt.empty()) {
            while(!inSt.empty()) {
                outSt.push(inSt.top());
                inSt.pop();
            }
        }
    }

public:
    MyQueue() {}
    
    void push(int x) {
        inSt.push(x);
    }
    
    int pop() {
        move();
        int x = outSt.top();
        outSt.pop();
        return x;
    }
    
    int peek() {
        move();
        return outSt.top();
    }
    
    bool empty() {
        return inSt.empty() && outSt.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

