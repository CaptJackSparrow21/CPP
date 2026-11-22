/*
 * @lc app=leetcode id=2124 lang=cpp
 *
 * [2124] Check if All A's Appears Before All B's
 */

// @lc code=start
class Solution {
public:
    bool checkString(string s) {
        bool seenB = false;
        for(char c : s) {
            if(c == 'b')
                seenB = true;
            else if(seenB)
                return false;
        }
        return true;
    }
};
// @lc code=end

