/*
 * @lc app=leetcode id=32 lang=cpp
 *
 * [32] Longest Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxLen = 0;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();
                if(st.empty()) {
                    st.push(i);
                }
                else {
                    maxLen = max(maxLen, i-st.top());
                }
            }
        }
        return maxLen;
    }
};
// @lc code=end

