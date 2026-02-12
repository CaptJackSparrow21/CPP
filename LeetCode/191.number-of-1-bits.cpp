/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while(n > 0) {
            if(n % 2 == 1) cnt++;
            n /= 2;
        }
        return cnt;
    }
};
// @lc code=end

