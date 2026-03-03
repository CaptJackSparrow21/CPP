/*
 * @lc app=leetcode id=2220 lang=cpp
 *
 * [2220] Minimum Bit Flips to Convert Number
 */

// @lc code=start
class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start ^ goal);
        // int ans = 0;
        // int res = start ^ goal;
        // while(res > 0) {
        //     if(res & 1) ans++;
        //     res >>= 1;
        // }
        // return ans;
    }
};
// @lc code=end

