/*
 * @lc app=leetcode id=1106 lang=cpp
 *
 * [1106] Parsing A Boolean Expression
 */

// @lc code=start
class Solution {
public:
    bool solve(string &s, int &i) {
        if(s[i] == 't') {
            i++;
            return true;
        }

        if(s[i] == 'f') {
            i++;
            return false;
        }
        
        char op = s[i++];
        i++;
        bool ans;

        if(op == '&')
            ans = true;
        else 
            ans = false;

        while(s[i] != ')') {
            if(s[i] == ',') {
                i++;
                continue;
            }

            bool value = solve(s, i);

            if(op == '&')
                ans &= value;
            else if(op == '|')
                ans |= value;
            else 
                ans = !value;
        }

        i++;
        return ans;
    }

    bool parseBoolExpr(string expression) {
        int i = 0;
        return solve(expression, i);
    }
};
// @lc code=end

