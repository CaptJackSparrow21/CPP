/*
 * @lc app=leetcode id=3360 lang=cpp
 *
 * [3360] Stone Removal Game
 */

// @lc code=start
class Solution {
public:
    bool canAliceWin(int n) {
        int x = 10, cnt = 0;
        
        while(n >= x) {
            n -= x;
            x--;
            cnt++;
        }

        return cnt % 2 == 1;
    }
};
// @lc code=end

