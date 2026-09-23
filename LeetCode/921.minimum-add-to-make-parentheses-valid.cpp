/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, close = 0;
        for(char c : s) {
            if(c == '(')
                open++;
            else if(open > 0)
                open--;
            else    
                close++;
        }
        return open + close;
    }
};
// @lc code=end

