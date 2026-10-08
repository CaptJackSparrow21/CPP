/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int bal = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(') {
                if(bal > 0) ans += s[i];
                bal++;
            }
            else {
                bal--;
                if(bal > 0) ans += s[i];
            }
        }
        return ans;
    }
};
// @lc code=end

