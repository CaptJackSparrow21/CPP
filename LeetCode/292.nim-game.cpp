/*
 * @lc app=leetcode id=292 lang=cpp
 *
 * [292] Nim Game
 */

// @lc code=start
class Solution {
public:
    bool canWinNim(int n) {
        if(n == 0) return false;
        else if(n % 4 == 0) return false;
        else return true;
    }
};
// @lc code=end

