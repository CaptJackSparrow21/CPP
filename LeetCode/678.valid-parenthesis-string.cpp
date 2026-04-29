/*
 * @lc app=leetcode id=678 lang=cpp
 *
 * [678] Valid Parenthesis String
 */

// @lc code=start
class Solution {
public:
    bool checkValidString(string s) {
        int mn = 0, mx = 0;
        for(char c : s) {
            if(c == '(') {
                mn++;
                mx++;
            }
            else if(c == ')') {
                mn--;
                mx--;
            }
            else {  // c == *
                mn--;
                mx++;
            }

            mn = max(mn, 0);
            if(mx < 0)
                return false;
        }
        return mn == 0;
    }
};
// @lc code=end

